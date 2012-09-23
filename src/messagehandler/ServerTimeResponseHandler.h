///////////////////////////////////////////////////////////
//  ServerTimeResponseHandler.h
//  Implementation of the Class ServerTimeResponseHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:48
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_6B219026_B25E_46b8_86BB_73542644D982__INCLUDED_)
#define EA_6B219026_B25E_46b8_86BB_73542644D982__INCLUDED_

class ServerTimeResponseHandler
{

public:
	ServerTimeResponseHandler();
	virtual ~ServerTimeResponseHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_6B219026_B25E_46b8_86BB_73542644D982__INCLUDED_)
