///////////////////////////////////////////////////////////
//  PolicyFileRequestHandler.h
//  Implementation of the Class PolicyFileRequestHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:46
//  Original author: Administrator
///////////////////////////////////////////////////////////

#if !defined(EA_370C6855_ED20_488a_88CD_CFAC3456B94B__INCLUDED_)
#define EA_370C6855_ED20_488a_88CD_CFAC3456B94B__INCLUDED_

class PolicyFileRequestHandler
{

public:
	PolicyFileRequestHandler();
	virtual ~PolicyFileRequestHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_370C6855_ED20_488a_88CD_CFAC3456B94B__INCLUDED_)
