///////////////////////////////////////////////////////////
//  ChangeRoomResponseHandler.h
//  Implementation of the Class ChangeRoomResponseHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:38
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_EBAE834A_190D_437f_A4CC_0993C6EB20DB__INCLUDED_)
#define EA_EBAE834A_190D_437f_A4CC_0993C6EB20DB__INCLUDED_

class ChangeRoomResponseHandler
{

public:
	ChangeRoomResponseHandler();
	virtual ~ChangeRoomResponseHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_EBAE834A_190D_437f_A4CC_0993C6EB20DB__INCLUDED_)
