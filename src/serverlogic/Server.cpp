/*
 * Server.cpp
 *
 *  Created on: 2012-9-28
 *      Author: dahoo
 */

#include "Server.h"

Server::Server() {
	// TODO Auto-generated constructor stub

}

Server::~Server() {
	// TODO Auto-generated destructor stub
}

String Server::getName() {
	return AbstractServer::name;
}

String Server::getLauncher() {
	return AbstractServer::launcher;
}

String Server::getIp() {
	return AbstractServer::ip;
}

int Server::getPort() {
	return AbstractServer::port;
}
