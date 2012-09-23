#pragma once
#include "tbb_string.h"
#include "Buffer.h"
#include "Channel.h"
class ServerHandler
{
public:

	ServerHandler(void)
	{
	}

	virtual ~ServerHandler(void)
	{
	}

  virtual void close(Channel channel)=0;
	virtual void sendResponse(Buffer buffer,Channel channel)=0;
  virtual String getIP(void)=0;
	virtual int getServerPort(void)=0;
};

