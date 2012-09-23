///////////////////////////////////////////////////////////
//  UserPropertyUpdateRequestHandler.h
//  Implementation of the Class UserPropertyUpdateRequestHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:50
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_870F2D6C_9034_4d1c_9000_E35FDC38E6D8__INCLUDED_)
#define EA_870F2D6C_9034_4d1c_9000_E35FDC38E6D8__INCLUDED_

class UserPropertyUpdateRequestHandler
{

public:
	UserPropertyUpdateRequestHandler();
	virtual ~UserPropertyUpdateRequestHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_870F2D6C_9034_4d1c_9000_E35FDC38E6D8__INCLUDED_)
