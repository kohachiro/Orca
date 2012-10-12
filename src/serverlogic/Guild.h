/*
 * Guild.h
 *
 *  Created on: 2012-9-28
 *      Author: dahoo
 */

#ifndef GUILD_H_
#define GUILD_H_

#include "Integer.h"
#include "tbbmalloc.h"
#include "tbbstring.h"
#include "ConcurrentVector.h"
#include "ConcurrentHashMap.h"


class Guild {
public:
	Guild(int id);
	virtual ~Guild();
	const int id;
	const String name;
	const ConcurrentHashMap<String, String> properties;
	const ConcurrentVector<Integer> userList;
};

#endif /* GUILD_H_ */
