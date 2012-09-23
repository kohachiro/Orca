///////////////////////////////////////////////////////////
//  RoomListNoticeHandler.h
//  Implementation of the Class RoomListNoticeHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:47
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_99766A99_CB3F_40c0_96CA_9CE0E1B2EA7E__INCLUDED_)
#define EA_99766A99_CB3F_40c0_96CA_9CE0E1B2EA7E__INCLUDED_

class RoomListNoticeHandler
{

public:
	RoomListNoticeHandler();
	virtual ~RoomListNoticeHandler();

	static int invoke(Object zone, Object channel) throw Exception;

};
#endif // !defined(EA_99766A99_CB3F_40c0_96CA_9CE0E1B2EA7E__INCLUDED_)
