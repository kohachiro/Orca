///////////////////////////////////////////////////////////
//  NewRoomNoticeHandler.h
//  Implementation of the Class NewRoomNoticeHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:44
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_608D2FB7_C8C3_4412_BA0F_2732361B98DA__INCLUDED_)
#define EA_608D2FB7_C8C3_4412_BA0F_2732361B98DA__INCLUDED_

class NewRoomNoticeHandler
{

public:
	NewRoomNoticeHandler();
	virtual ~NewRoomNoticeHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_608D2FB7_C8C3_4412_BA0F_2732361B98DA__INCLUDED_)
