///////////////////////////////////////////////////////////
//  ServerMessageRequestHandler.h
//  Implementation of the Class ServerMessageRequestHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:48
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_156BB3F5_0C27_4426_B7A9_1A1421E22689__INCLUDED_)
#define EA_156BB3F5_0C27_4426_B7A9_1A1421E22689__INCLUDED_

class ServerMessageRequestHandler
{

public:
	ServerMessageRequestHandler();
	virtual ~ServerMessageRequestHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_156BB3F5_0C27_4426_B7A9_1A1421E22689__INCLUDED_)
