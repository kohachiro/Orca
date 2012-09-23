///////////////////////////////////////////////////////////
//  MessageByNameRequestHandler.h
//  Implementation of the Class MessageByNameRequestHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:43
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_98E81893_8A6E_4cc9_B0CF_4D97F02CED67__INCLUDED_)
#define EA_98E81893_8A6E_4cc9_B0CF_4D97F02CED67__INCLUDED_

class MessageByNameRequestHandler
{

public:
	MessageByNameRequestHandler();
	virtual ~MessageByNameRequestHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_98E81893_8A6E_4cc9_B0CF_4D97F02CED67__INCLUDED_)
