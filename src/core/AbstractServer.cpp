/*
 * AbstractServer.cpp
 *
 *  Created on: 2012-9-26
 *      Author: dahoo
 */

#include "AbstractServer.h"

AbstractServer::AbstractServer() {
	// TODO Auto-generated constructor stub

}

AbstractServer::~AbstractServer() {
	// TODO Auto-generated destructor stub
}

void AbstractServer::errorHandler(Channel channel) {
}

void AbstractServer::connected(Channel channel) {
}

void AbstractServer::disConnected(Channel channel) {
}

void AbstractServer::execute(Buffer buffer, Channel channel) {
}

int AbstractServer::port = 8089;
String AbstractServer::ip = "0.0.0.0";
String AbstractServer::name = "";
String AbstractServer::framework = "";
