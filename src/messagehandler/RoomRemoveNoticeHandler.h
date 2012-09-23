///////////////////////////////////////////////////////////
//  RoomRemoveNoticeHandler.h
//  Implementation of the Class RoomRemoveNoticeHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:48
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_5D61B04D_D342_43d7_A3F1_F720B53D724B__INCLUDED_)
#define EA_5D61B04D_D342_43d7_A3F1_F720B53D724B__INCLUDED_

class RoomRemoveNoticeHandler
{

public:
	RoomRemoveNoticeHandler();
	virtual ~RoomRemoveNoticeHandler();

	static int invoke(Object data, Object channel) throw Exception;

};
#endif // !defined(EA_5D61B04D_D342_43d7_A3F1_F720B53D724B__INCLUDED_)
