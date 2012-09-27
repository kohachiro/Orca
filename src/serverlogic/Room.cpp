/*
 * Room.cpp
 *
 *  Created on: 2012-9-26
 *      Author: kohachiro
 */

#include "Room.h"

Room::Room(int id, int regionId, int createrId, int templateId, int maxUsers,
		boolean visible, boolean sendUserList) :
		id(id), regionId(regionId), createrId(createrId), templateId(
				templateId), maxUsers(maxUsers), visible(visible), sendUserList(
				sendUserList) {
	// TODO Auto-generated constructor stub

}

Room::~Room() {
	// TODO Auto-generated destructor stub
}

