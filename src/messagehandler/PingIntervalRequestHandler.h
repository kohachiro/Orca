///////////////////////////////////////////////////////////
//  PingIntervalRequestHandler.h
//  Implementation of the Class PingIntervalRequestHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:45
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_9353D8B4_D0AE_49a4_8F84_2E3963A7EFA5__INCLUDED_)
#define EA_9353D8B4_D0AE_49a4_8F84_2E3963A7EFA5__INCLUDED_

class PingIntervalRequestHandler
{

public:
	PingIntervalRequestHandler();
	virtual ~PingIntervalRequestHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_9353D8B4_D0AE_49a4_8F84_2E3963A7EFA5__INCLUDED_)
