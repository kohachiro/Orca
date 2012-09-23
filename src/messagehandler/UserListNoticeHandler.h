///////////////////////////////////////////////////////////
//  UserListNoticeHandler.h
//  Implementation of the Class UserListNoticeHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:50
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_16C67635_F8E5_4555_B6DC_8F0D0AD4574A__INCLUDED_)
#define EA_16C67635_F8E5_4555_B6DC_8F0D0AD4574A__INCLUDED_

class UserListNoticeHandler
{

public:
	UserListNoticeHandler();
	virtual ~UserListNoticeHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_16C67635_F8E5_4555_B6DC_8F0D0AD4574A__INCLUDED_)
