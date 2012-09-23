///////////////////////////////////////////////////////////
//  ZoneMessageRequestHandler.h
//  Implementation of the Class ZoneMessageRequestHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:51
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_3A0300A4_77F7_4b88_9848_9BC8690112AC__INCLUDED_)
#define EA_3A0300A4_77F7_4b88_9848_9BC8690112AC__INCLUDED_

class ZoneMessageRequestHandler
{

public:
	ZoneMessageRequestHandler();
	virtual ~ZoneMessageRequestHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_3A0300A4_77F7_4b88_9848_9BC8690112AC__INCLUDED_)
