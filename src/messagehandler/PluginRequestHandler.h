///////////////////////////////////////////////////////////
//  PluginRequestHandler.h
//  Implementation of the Class PluginRequestHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:45
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_E7C8F481_636C_4959_BD35_5C847ECDB0A0__INCLUDED_)
#define EA_E7C8F481_636C_4959_BD35_5C847ECDB0A0__INCLUDED_

class PluginRequestHandler
{

public:
	PluginRequestHandler();
	virtual ~PluginRequestHandler();

	static int invoke(Object obj, Object channel) throw Exception;

};
#endif // !defined(EA_E7C8F481_636C_4959_BD35_5C847ECDB0A0__INCLUDED_)
