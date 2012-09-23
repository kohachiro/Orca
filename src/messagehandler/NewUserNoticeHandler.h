///////////////////////////////////////////////////////////
//  NewUserNoticeHandler.h
//  Implementation of the Class NewUserNoticeHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:44
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_82228BDD_97B1_428c_BE59_08C6B4A3D1D3__INCLUDED_)
#define EA_82228BDD_97B1_428c_BE59_08C6B4A3D1D3__INCLUDED_

class NewUserNoticeHandler
{

public:
	NewUserNoticeHandler();
	virtual ~NewUserNoticeHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_82228BDD_97B1_428c_BE59_08C6B4A3D1D3__INCLUDED_)
