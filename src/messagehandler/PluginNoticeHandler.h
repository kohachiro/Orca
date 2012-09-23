///////////////////////////////////////////////////////////
//  PluginNoticeHandler.h
//  Implementation of the Class PluginNoticeHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:45
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_FBDED24D_D334_4921_8C4D_82394A55645A__INCLUDED_)
#define EA_FBDED24D_D334_4921_8C4D_82394A55645A__INCLUDED_

class PluginNoticeHandler
{

public:
	PluginNoticeHandler();
	virtual ~PluginNoticeHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_FBDED24D_D334_4921_8C4D_82394A55645A__INCLUDED_)
