///////////////////////////////////////////////////////////
//  UserLeaveNoticeHandler.h
//  Implementation of the Class UserLeaveNoticeHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:50
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_2A3E7134_62E3_46e8_B410_624E5D3CD826__INCLUDED_)
#define EA_2A3E7134_62E3_46e8_B410_624E5D3CD826__INCLUDED_

class UserLeaveNoticeHandler
{

public:
	UserLeaveNoticeHandler();
	virtual ~UserLeaveNoticeHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_2A3E7134_62E3_46e8_B410_624E5D3CD826__INCLUDED_)
