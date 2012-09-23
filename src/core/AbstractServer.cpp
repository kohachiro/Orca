#include "AbstractServer.h"


AbstractServer::AbstractServer(void)
{

}


AbstractServer::~AbstractServer(void)
{
}

void AbstractServer::errorHandler(Channel channel)
{
}

void AbstractServer::connected(Channel channel)
{
}

void AbstractServer::disConnected(Channel channel)
{
}

void AbstractServer::execute(Buffer buffer,Channel channel)
{

}

int AbstractServer::port=8089;
String AbstractServer::ip="0.0.0.0";
String AbstractServer::name="";
String AbstractServer::framework="";