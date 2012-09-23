///////////////////////////////////////////////////////////
//  InvidRequestHandler.h
//  Implementation of the Class InvidRequestHandler
//  Created on:      13-¾ÅÔÂ-2012 5:16:40
//  Original author: kohachiro
///////////////////////////////////////////////////////////

#if !defined(EA_845398CB_F107_4ee9_B698_86DBDE1E581E__INCLUDED_)
#define EA_845398CB_F107_4ee9_B698_86DBDE1E581E__INCLUDED_

class InvidRequestHandler
{

public:
	InvidRequestHandler();
	virtual ~InvidRequestHandler();

	static int invoke(Object obj, Object channel);

};
#endif // !defined(EA_845398CB_F107_4ee9_B698_86DBDE1E581E__INCLUDED_)
