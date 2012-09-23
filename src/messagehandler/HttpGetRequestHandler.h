///////////////////////////////////////////////////////////
//  HttpGetRequestHandler.h
//  Implementation of the Class HttpGetRequestHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:40
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_A2974B2C_E355_4218_9922_DCF18B59A6BE__INCLUDED_)
#define EA_A2974B2C_E355_4218_9922_DCF18B59A6BE__INCLUDED_

class HttpGetRequestHandler
{

public:
	HttpGetRequestHandler();
	virtual ~HttpGetRequestHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_A2974B2C_E355_4218_9922_DCF18B59A6BE__INCLUDED_)
