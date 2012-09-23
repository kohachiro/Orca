#include "Room.h"


Room::Room(int id,int regionId,int createrId,int templateId,int maxUsers,boolean visible,boolean sendUserList)
	:id(id),regionId(regionId),createrId(createrId),templateId(templateId),maxUsers(maxUsers),visible(visible),sendUserList(sendUserList)
{
}


Room::~Room(void)
{
}
