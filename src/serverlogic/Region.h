/*
 * Region.h
 *
 *  Created on: 2012-9-26
 *      Author: kohachiro
 */

#ifndef REGION_H_
#define REGION_H_

#include "boolean.h"
#include "Integer.h"
#include "tbbmalloc.h"
#include "tbbstring.h"
#include "ConcurrentVector.h"
#include "ConcurrentHashMap.h"


class Region {
public:
	Region(int id, int maxRoom, int sendRoomChangeTo, boolean createRoom,
			boolean sendUserCountChange);
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

#endif /* REGION_H_ */
