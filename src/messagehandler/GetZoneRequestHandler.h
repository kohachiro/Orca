///////////////////////////////////////////////////////////
//  GetZoneRequestHandler.h
//  Implementation of the Class GetZoneRequestHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:39
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_DC19C82D_E7F7_4654_BCF5_2C6FA462B0D7__INCLUDED_)
#define EA_DC19C82D_E7F7_4654_BCF5_2C6FA462B0D7__INCLUDED_

class GetZoneRequestHandler
{

public:
	GetZoneRequestHandler();
	virtual ~GetZoneRequestHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_DC19C82D_E7F7_4654_BCF5_2C6FA462B0D7__INCLUDED_)
