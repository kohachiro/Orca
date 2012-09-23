///////////////////////////////////////////////////////////
//  AbstractServer.h
//  Implementation of the Class AbstractServer
//  Created on:      13-九月-2012 5:16:37
//  Original author: kohachiro
///////////////////////////////////////////////////////////
#pragma once

#include "tbb_string.h"
#include "Channel.h"
#include "Buffer.h"

/**
 * 抽象服务器类 用于启动服务器
 */
class AbstractServer
{

public:
	AbstractServer(void);
	virtual ~AbstractServer(void);
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

