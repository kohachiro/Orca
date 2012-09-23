#pragma once
#include "common.h"

class Template
{
public:
	Template(int id,int maxUsers,int regionId);
	virtual ~Template(void);
private:
	const int id;
	const String name;
	const ConcurrentHashMap<String, String> properties;
	const int maxUsers;
  const int regionId;
};

