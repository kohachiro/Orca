#pragma once
#include "common.h"

class Region
{
public:
	Region(int id,int maxRoom,int sendRoomChangeTo,boolean createRoom,boolean sendUserCountChange);
	virtual ~Region(void);
private:
	const int id;
	const String name;
	const ConcurrentHashMap<String, String> properties;
	const int maxRoom;
	const int sendRoomChangeTo;
	const boolean createRoom;
	const boolean sendUserCountChange;
	const ConcurrentVector<Integer> roomList;
};