#include "Region.h"


Region::Region(int id,int maxRoom,int sendRoomChangeTo,boolean createRoom,boolean sendUserCountChange)
	:id(id),maxRoom(maxRoom),sendRoomChangeTo(sendRoomChangeTo),createRoom(createRoom),sendUserCountChange(sendUserCountChange)
{
}


Region::~Region(void)
{
}
