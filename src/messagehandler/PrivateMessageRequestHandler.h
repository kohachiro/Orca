///////////////////////////////////////////////////////////
//  PrivateMessageRequestHandler.h
//  Implementation of the Class PrivateMessageRequestHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:46
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_DC780E2A_625D_4a19_9085_C66EC79A0050__INCLUDED_)
#define EA_DC780E2A_625D_4a19_9085_C66EC79A0050__INCLUDED_

class PrivateMessageRequestHandler
{

public:
	PrivateMessageRequestHandler();
	virtual ~PrivateMessageRequestHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_DC780E2A_625D_4a19_9085_C66EC79A0050__INCLUDED_)
