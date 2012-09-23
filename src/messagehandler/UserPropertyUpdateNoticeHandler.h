///////////////////////////////////////////////////////////
//  UserPropertyUpdateNoticeHandler.h
//  Implementation of the Class UserPropertyUpdateNoticeHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:50
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_4ABC5E5F_7E56_438f_BEC9_2B5176156182__INCLUDED_)
#define EA_4ABC5E5F_7E56_438f_BEC9_2B5176156182__INCLUDED_

class UserPropertyUpdateNoticeHandler
{

public:
	UserPropertyUpdateNoticeHandler();
	virtual ~UserPropertyUpdateNoticeHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_4ABC5E5F_7E56_438f_BEC9_2B5176156182__INCLUDED_)
