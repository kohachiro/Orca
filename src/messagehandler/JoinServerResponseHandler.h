///////////////////////////////////////////////////////////
//  JoinServerResponseHandler.h
//  Implementation of the Class JoinServerResponseHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:42
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_03087897_4B19_491b_9B39_65F4B79009E4__INCLUDED_)
#define EA_03087897_4B19_491b_9B39_65F4B79009E4__INCLUDED_

class JoinServerResponseHandler
{

public:
	JoinServerResponseHandler();
	virtual ~JoinServerResponseHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_03087897_4B19_491b_9B39_65F4B79009E4__INCLUDED_)
