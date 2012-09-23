///////////////////////////////////////////////////////////
//  NetSpeedResponseHandler.h
//  Implementation of the Class NetSpeedResponseHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:43
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_2F73C23C_1733_4f6b_AC21_8FADCEE7F81A__INCLUDED_)
#define EA_2F73C23C_1733_4f6b_AC21_8FADCEE7F81A__INCLUDED_

class NetSpeedResponseHandler
{

public:
	NetSpeedResponseHandler();
	virtual ~NetSpeedResponseHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_2F73C23C_1733_4f6b_AC21_8FADCEE7F81A__INCLUDED_)
