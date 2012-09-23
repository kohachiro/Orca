///////////////////////////////////////////////////////////
//  CreateRoomRequestHandler.h
//  Implementation of the Class CreateRoomRequestHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:39
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_690E1797_3D6A_432c_9245_0BB9F1D708B6__INCLUDED_)
#define EA_690E1797_3D6A_432c_9245_0BB9F1D708B6__INCLUDED_

class CreateRoomRequestHandler
{

public:
	CreateRoomRequestHandler();
	virtual ~CreateRoomRequestHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_690E1797_3D6A_432c_9245_0BB9F1D708B6__INCLUDED_)
