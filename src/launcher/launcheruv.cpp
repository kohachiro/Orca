/*
 * launcheruv.cpp
 *
 *  Created on: 2012-9-26
 *      Author: dahoo
 */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <assert.h>

#include "Buffer.h"
#include "Channel.h"
#include "tbbstring.h"
#include "tbbmalloc.h"
#include "ServerHandler.h"
#include "uv/include/uv.h"
#include "core/AbstractServer.h"

#define container_of(ptr, type, member) ((type *) ((char *) (ptr) - offsetof(type, member)))

#define RESPONSE "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\nContent-Length: 12\r\n\r\nhello world\n"

typedef struct {
	uv_tcp_t handle;
	uv_write_t write_req;
	int request_num;
} client_t;

static uv_loop_t* uv_loop;
static uv_tcp_t tcp_server;

static uv_buf_t resbuf;

static void connection_cb(uv_stream_t* stream, int status);
static uv_buf_t alloc_cb(uv_handle_t* handle, size_t suggested_size);
static void read_cb(uv_stream_t* stream, ssize_t nread, uv_buf_t buf);
static void close_cb(uv_handle_t* handle);
static void after_write(uv_write_t* req, int status);
class LauncherUv: public ServerHandler {
public:
	LauncherUv(void) {

	}
	void close(Channel channel) {
		uv_close((uv_handle_t*) channel, close_cb);
	}
	void sendResponse(Buffer buffer, Channel channel) {
		uv_buf_t resbuf;
		resbuf.base = buffer.base;
		resbuf.len = buffer.len;
		uv_write(&((client_t*) channel)->write_req,
				(uv_stream_t*) &((client_t*) channel)->handle, &resbuf, 1,
				after_write);
	}
	String getIP(void) {
		return AbstractServer::ip;
	}
	int getServerPort(void) {
		return AbstractServer::port;
	}
};

void after_write(uv_write_t* req, int status) {
	uv_close((uv_handle_t*) req->handle, close_cb);
}

static uv_buf_t alloc_cb(uv_handle_t* handle, size_t suggested_size) {
	uv_buf_t buf;
	buf.base = (char*) malloc(suggested_size);
	buf.len = suggested_size;
	return buf;
}

static void read_cb(uv_stream_t* stream, ssize_t nread, uv_buf_t buf) {
	client_t* client = (client_t*) stream->data;
	Buffer buffer;
	buffer.base = buf.base;
	buffer.len = buf.len;
	AbstractServer::execute(buffer, (char*) client);

	if (nread >= 0) {

		uv_write(&client->write_req, (uv_stream_t*) &client->handle, &resbuf, 1,
				after_write);
		return;
	} else {
		uv_err_t err = uv_last_error(stream->loop);

		if (err.code == UV_EOF) {
			client = container_of(stream, client_t, handle);
			uv_close((uv_handle_t*) &client->handle, close_cb);
			return;
		}
		fprintf(stderr, "read:%s\n",uv_strerror(err));
	}
}

static void connection_cb(uv_stream_t* stream, int status) {
	client_t* client;
	int r;

	assert(status == 0);
	assert(stream == (uv_stream_t*)&tcp_server);

	client = (client_t*) malloc(sizeof *client);
	assert(client != NULL);
	client->request_num = 1;

	r = uv_tcp_init(stream->loop, &client->handle);
	assert(r == 0);

	client->handle.data = client;

	r = uv_accept(stream, (uv_stream_t*) &client->handle);
	assert(r == 0);

	r = uv_read_start((uv_stream_t*) &client->handle, alloc_cb, read_cb);
	assert(r == 0);

	AbstractServer::connected((Channel) client);
}

static void close_cb(uv_handle_t* handle) {
	client_t* client = container_of(handle, client_t, handle);

	AbstractServer::disConnected((Channel) client);

	free(client);
}

int main(int argc, char *argv[]) {
	sockaddr_in addr;
	int r;

	resbuf.base = RESPONSE;
	resbuf.len = sizeof(RESPONSE);

	uv_loop = uv_default_loop();

	LauncherUv* server = new LauncherUv();
	AbstractServer::launcher = "libuv";

	addr = uv_ip4_addr(AbstractServer::ip.c_str(), AbstractServer::port);

	r = uv_tcp_init(uv_loop, &tcp_server);
	assert(r == 0);

	r = uv_tcp_bind(&tcp_server, addr);
	assert(r == 0);

	r = uv_listen((uv_stream_t*) &tcp_server, 128, connection_cb);
	assert(r == 0);
	printf("start\n");

	r = uv_run(uv_loop);
	assert(0 && "Server dropped out of event loop.");

}
