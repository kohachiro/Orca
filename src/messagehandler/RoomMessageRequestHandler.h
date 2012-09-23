///////////////////////////////////////////////////////////
//  RoomMessageRequestHandler.h
//  Implementation of the Class RoomMessageRequestHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:47
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_0E1EEC75_FDE8_4e49_B583_B1310A604E30__INCLUDED_)
#define EA_0E1EEC75_FDE8_4e49_B583_B1310A604E30__INCLUDED_

class RoomMessageRequestHandler
{

public:
	RoomMessageRequestHandler();
	virtual ~RoomMessageRequestHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_0E1EEC75_FDE8_4e49_B583_B1310A604E30__INCLUDED_)
