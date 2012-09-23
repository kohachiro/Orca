///////////////////////////////////////////////////////////
//  DisconnectedRequest.h
//  Implementation of the Class DisconnectedRequest
//  Created on:      13-¾ÅÔÂ-2012 5:16:39
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_255761C1_0630_4dbe_B00F_A2AFE02A3555__INCLUDED_)
#define EA_255761C1_0630_4dbe_B00F_A2AFE02A3555__INCLUDED_

class DisconnectedRequest
{

public:
	DisconnectedRequest();
	virtual ~DisconnectedRequest();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_255761C1_0630_4dbe_B00F_A2AFE02A3555__INCLUDED_)
