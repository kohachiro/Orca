#include "uv/include/uv.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <assert.h>

#define container_of(ptr, type, member) \
  ((type *) ((char *) (ptr) - offsetof(type, member)))

#define RESPONSE \
  "HTTP/1.1 200 OK\r\n" \
  "Content-Type: text/plain\r\n" \
  "Content-Length: 12\r\n" \
  "\r\n" \
  "hello world\n"

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
static void shutdown_cb(uv_shutdown_t* req, int status);
static void close_cb(uv_handle_t* handle);

void after_write(uv_write_t* req, int status) {
  uv_close((uv_handle_t*)req->handle, close_cb);
}

static void read_cb(uv_stream_t* stream, ssize_t nread, uv_buf_t buf) {
  client_t* client = (client_t*) stream->data;
	
	if (nread>=0){
	  uv_write(&client->write_req,(uv_stream_t*)&client->handle,&resbuf,1,after_write);
		return;
  }else{
		uv_err_t err = uv_last_error(stream->loop);

		if (err.code == UV_EOF){
			client = container_of(stream, client_t, handle);
			uv_close((uv_handle_t*)&client->handle, close_cb);
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

  printf("connected\n");

	client = (client_t*)malloc(sizeof *client);
  assert(client != NULL);
	client->request_num = 1;

  r = uv_tcp_init(stream->loop, &client->handle);
  assert(r == 0);
	
  client->handle.data = client;

  r = uv_accept(stream, (uv_stream_t*)&client->handle);
  assert(r == 0);

  r = uv_read_start((uv_stream_t*)&client->handle, alloc_cb, read_cb);
  assert(r == 0);
}

static uv_buf_t alloc_cb(uv_handle_t* handle, size_t suggested_size) {
  uv_buf_t buf;
  buf.base = (char*) malloc(suggested_size);
  buf.len = suggested_size;
  return buf;
}



static void close_cb(uv_handle_t* handle) {
  client_t* client = container_of(handle, client_t, handle);
  free(client);
  printf("disconnected\n");
}

int main(int argc, char *argv[]){
  sockaddr_in addr;
  int r;
 
  resbuf.base = RESPONSE;
  resbuf.len = sizeof(RESPONSE);

  uv_loop = uv_default_loop();
  addr = uv_ip4_addr("127.0.0.1", 8089);

  r = uv_tcp_init(uv_loop, &tcp_server);
  assert(r == 0);

  r = uv_tcp_bind(&tcp_server, addr);
  assert(r == 0);

  r = uv_listen((uv_stream_t*)&tcp_server, 128, connection_cb);
  assert(r == 0);
  printf("start\n");

  r = uv_run(uv_loop);
  assert(0 && "Blackhole server dropped out of event loop.");

}