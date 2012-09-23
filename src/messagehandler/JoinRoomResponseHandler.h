///////////////////////////////////////////////////////////
//  JoinRoomResponseHandler.h
//  Implementation of the Class JoinRoomResponseHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:41
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_138D072F_2212_4ae5_A226_C547B2A1B2E7__INCLUDED_)
#define EA_138D072F_2212_4ae5_A226_C547B2A1B2E7__INCLUDED_

class JoinRoomResponseHandler
{

public:
	JoinRoomResponseHandler();
	virtual ~JoinRoomResponseHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_138D072F_2212_4ae5_A226_C547B2A1B2E7__INCLUDED_)
