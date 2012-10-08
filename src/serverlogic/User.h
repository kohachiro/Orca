/*
 * User.h
 *
 *  Created on: 2012-9-26
 *      Author: kohachiro
 */

#ifndef USER_H_
#define USER_H_

#include "tbbmalloc.h"
#include "tbbstring.h"
#include "AtomicInteger.h"
#include "ConcurrentHashMap.h"

#include "Channel.h"

class User {
public:
	User(int id, Channel channel);
	virtual ~User();
	const int id;
	const String name;
	const ConcurrentHashMap<String, String> properties;
	const ConcurrentHashMap<String, String> extProperties;
	const Channel channel;

	AtomicInteger roomId;
	AtomicInteger teamId;
	AtomicInteger guildId;
};

#endif /* USER_H_ */
