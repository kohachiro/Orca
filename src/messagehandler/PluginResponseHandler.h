///////////////////////////////////////////////////////////
//  PluginResponseHandler.h
//  Implementation of the Class PluginResponseHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:45
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_A95EE077_DA50_4ead_AFF0_583CC40640F9__INCLUDED_)
#define EA_A95EE077_DA50_4ead_AFF0_583CC40640F9__INCLUDED_

class PluginResponseHandler
{

public:
	PluginResponseHandler();
	virtual ~PluginResponseHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_A95EE077_DA50_4ead_AFF0_583CC40640F9__INCLUDED_)
