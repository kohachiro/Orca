#pragma once
#include "common.h"
#include "Region.h"
class Room
{
public:
  Room::Room(int id,int regionId,int createrId,int templateId,int maxUsers,boolean visible,boolean sendUserList);
	virtual ~Room(void);
private:
	const int id;
	const String name;
	const concurrent_hash_map<String, String> properties;

  const int regionId;
	const int createrId;
	const int templateId;
	const int maxUsers;

	const ConcurrentVector<Integer> userList;
	const ConcurrentVector<Integer> from;
	const boolean visible;	
	const boolean sendUserList;	

	const String password;

	AtomicInteger lock;
	AtomicInteger spectatorLimit;
};