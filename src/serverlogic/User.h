#pragma once
#include "common.h"
#include "Channel.h"
class User
{
public:
	User(int id,Channel channel);
	virtual ~User(void);
private:
	const int id;
	const String name;
	const ConcurrentHashMap<String, String> properties;
	const ConcurrentHashMap<String, String> extProperties;
	const Channel channel;

	AtomicInteger roomId;
	AtomicInteger teamId;
	AtomicInteger guildId;
};

