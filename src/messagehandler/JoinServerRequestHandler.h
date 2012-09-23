///////////////////////////////////////////////////////////
//  JoinServerRequestHandler.h
//  Implementation of the Class JoinServerRequestHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:41
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_B2E9F923_5B7E_402b_88E5_31B1431D5447__INCLUDED_)
#define EA_B2E9F923_5B7E_402b_88E5_31B1431D5447__INCLUDED_

class JoinServerRequestHandler
{

public:
	JoinServerRequestHandler();
	virtual ~JoinServerRequestHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_B2E9F923_5B7E_402b_88E5_31B1431D5447__INCLUDED_)
