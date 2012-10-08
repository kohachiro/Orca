/*
 * ServerHandler.h
 *
 *  Created on: 2012-9-28
 *      Author: dahoo
 */

#ifndef SERVERHANDLER_H_
#define SERVERHANDLER_H_


#include "tbbstring.h"
#include "Buffer.h"
#include "Channel.h"
class ServerHandler {
public:

	ServerHandler(void) {
	}

	virtual ~ServerHandler(void) {
	}

	virtual void close(Channel channel)=0;
	virtual void sendResponse(Buffer buffer, Channel channel)=0;

};


#endif /* SERVERHANDLER_H_ */
