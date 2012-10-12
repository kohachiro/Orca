/*
 * Server.h
 *
 *  Created on: 2012-9-28
 *      Author: dahoo
 */

#ifndef SERVER_H_
#define SERVER_H_

#include "tbbmalloc.h"
#include "tbbstring.h"
#include "core/AbstractServer.h"
class Server {
public:
	Server();
	virtual ~Server();
	static String getName();
	static String getLauncher();
	static String getIp();
	static int getPort();
};

#endif /* SERVER_H_ */
