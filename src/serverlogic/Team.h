/*
 * Team.h
 *
 *  Created on: 2012-9-27
 *      Author: kohachiro
 */

#ifndef TEAM_H_
#define TEAM_H_

#include "Integer.h"
#include "tbbmalloc.h"
#include "tbbstring.h"
#include "ConcurrentVector.h"
#include "ConcurrentHashMap.h"

class Team {
public:
	Team(int id);
	virtual ~Team(void);
private:
	const int id;
	const String name;
	const ConcurrentHashMap<String, String> properties;
	const ConcurrentVector<Integer> userList;
};

#endif /* TEAM_H_ */
