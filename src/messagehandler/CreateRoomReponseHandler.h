///////////////////////////////////////////////////////////
//  CreateRoomReponseHandler.h
//  Implementation of the Class CreateRoomReponseHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:38
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_7FE553A6_0064_40a3_AFBE_4E9E7D1E7300__INCLUDED_)
#define EA_7FE553A6_0064_40a3_AFBE_4E9E7D1E7300__INCLUDED_

class CreateRoomReponseHandler
{

public:
	CreateRoomReponseHandler();
	virtual ~CreateRoomReponseHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_7FE553A6_0064_40a3_AFBE_4E9E7D1E7300__INCLUDED_)
