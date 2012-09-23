///////////////////////////////////////////////////////////
//  GetZoneResponseHandler.h
//  Implementation of the Class GetZoneResponseHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:40
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_6B957826_E522_4b9c_9F27_DF65F3CA4F63__INCLUDED_)
#define EA_6B957826_E522_4b9c_9F27_DF65F3CA4F63__INCLUDED_

class GetZoneResponseHandler
{

public:
	GetZoneResponseHandler();
	virtual ~GetZoneResponseHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_6B957826_E522_4b9c_9F27_DF65F3CA4F63__INCLUDED_)
