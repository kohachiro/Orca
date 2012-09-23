///////////////////////////////////////////////////////////
//  RoomPropertyUpdateNoticeHandler.h
//  Implementation of the Class RoomPropertyUpdateNoticeHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:47
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_9FB25347_5BFD_4aa6_BF75_07F69FB9141B__INCLUDED_)
#define EA_9FB25347_5BFD_4aa6_BF75_07F69FB9141B__INCLUDED_

class RoomPropertyUpdateNoticeHandler
{

public:
	RoomPropertyUpdateNoticeHandler();
	virtual ~RoomPropertyUpdateNoticeHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_9FB25347_5BFD_4aa6_BF75_07F69FB9141B__INCLUDED_)
