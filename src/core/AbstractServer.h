/*
 * AbstractServer.h
 *
 *  Created on: 2012-9-26
 *      Author: dahoo
 */

#ifndef ABSTRACTSERVER_H_
#define ABSTRACTSERVER_H_

#include "../tbb_string.h"
#include "../Channel.h"
#include "../Buffer.h"

class AbstractServer {
public:
	AbstractServer();
	virtual ~AbstractServer();
	static void errorHandler(Channel channel);
	static void connected(Channel channel);
	static void disConnected(Channel channel);
	static void execute(Buffer buffer, Channel channel);

	static String name;
	static String framework;
	static String ip;
	static int port;

private:
};

#endif /* ABSTRACTSERVER_H_ */
