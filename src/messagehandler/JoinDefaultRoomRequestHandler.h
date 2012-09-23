///////////////////////////////////////////////////////////
//  JoinDefaultRoomRequestHandler.h
//  Implementation of the Class JoinDefaultRoomRequestHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:41
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_DBFF0665_E524_4788_8BF9_74137B76387E__INCLUDED_)
#define EA_DBFF0665_E524_4788_8BF9_74137B76387E__INCLUDED_

class JoinDefaultRoomRequestHandler
{

public:
	JoinDefaultRoomRequestHandler();
	virtual ~JoinDefaultRoomRequestHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_DBFF0665_E524_4788_8BF9_74137B76387E__INCLUDED_)
