///////////////////////////////////////////////////////////
//  ServerErrorResponseHandler.h
//  Implementation of the Class ServerErrorResponseHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:48
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_2A3A596E_89C3_4515_B18B_9CBEF1C992D2__INCLUDED_)
#define EA_2A3A596E_89C3_4515_B18B_9CBEF1C992D2__INCLUDED_

class ServerErrorResponseHandler
{

public:
	ServerErrorResponseHandler();
	virtual ~ServerErrorResponseHandler();

	static int invoke(Object obj, Object channel);

};
#endif // !defined(EA_2A3A596E_89C3_4515_B18B_9CBEF1C992D2__INCLUDED_)
