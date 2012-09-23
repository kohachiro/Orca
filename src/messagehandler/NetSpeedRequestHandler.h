///////////////////////////////////////////////////////////
//  NetSpeedRequestHandler.h
//  Implementation of the Class NetSpeedRequestHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:43
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_39345B4E_650F_4386_86E5_74C064A8C274__INCLUDED_)
#define EA_39345B4E_650F_4386_86E5_74C064A8C274__INCLUDED_

class NetSpeedRequestHandler
{

public:
	NetSpeedRequestHandler();
	virtual ~NetSpeedRequestHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_39345B4E_650F_4386_86E5_74C064A8C274__INCLUDED_)
