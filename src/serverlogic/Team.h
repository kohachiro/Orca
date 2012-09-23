#pragma once
#include "common.h"

class Team
{
public:
	Team(int id);
	virtual ~Team(void);
private:
	const int id;
	const String name;
	const ConcurrentHashMap<String, String> properties;
	const ConcurrentVector<Integer> userList;
};

