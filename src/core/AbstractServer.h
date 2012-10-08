/*
 * AbstractServer.h
 *
 *  Created on: 2012-9-26
 *      Author: dahoo
 */

#ifndef ABSTRACTSERVER_H_
#define ABSTRACTSERVER_H_

#include "tbbstring.h"
#include "Channel.h"
#include "Buffer.h"
#include <iostream>
#include "ServerHandler.h"
using namespace std;

class AbstractServer {
public:
	AbstractServer(ServerHandler* pServerHandler);
	virtual ~AbstractServer();
	static void errorHandler(Channel channel);
	static void connected(Channel channel);
	static void disConnected(Channel channel);
	static void execute(Buffer buffer, Channel channel);

	static String name;
	static String launcher;
	static String ip;
	static int port;
	static ServerHandler* pServerHandler;
private:
};

#endif /* ABSTRACTSERVER_H_ */
