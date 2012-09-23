///////////////////////////////////////////////////////////
//  ChangeRoomRequestHandler.h
//  Implementation of the Class ChangeRoomRequestHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:38
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_E7A3AB07_D6AF_41ec_8D1E_C6E355085694__INCLUDED_)
#define EA_E7A3AB07_D6AF_41ec_8D1E_C6E355085694__INCLUDED_

class ChangeRoomRequestHandler
{

public:
	ChangeRoomRequestHandler();
	virtual ~ChangeRoomRequestHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_E7A3AB07_D6AF_41ec_8D1E_C6E355085694__INCLUDED_)
