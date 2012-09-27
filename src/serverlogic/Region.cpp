/*
 * Region.cpp
 *
 *  Created on: 2012-9-26
 *      Author: kohachiro
 */

#include "Region.h"

Region::Region(int id, int maxRoom, int sendRoomChangeTo, boolean createRoom,
		boolean sendUserCountChange) :
		id(id), maxRoom(maxRoom), sendRoomChangeTo(sendRoomChangeTo), createRoom(
				createRoom), sendUserCountChange(sendUserCountChange) {
	// TODO Auto-generated constructor stub

}

Region::~Region() {
	// TODO Auto-generated destructor stub
}

