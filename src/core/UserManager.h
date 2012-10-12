/*
 * UserManager.h
 *
 *  Created on: 2012-9-28
 *      Author: dahoo
 */

#ifndef USERMANAGER_H_
#define USERMANAGER_H_

#include "serverlogic/User.h"
#include "serverlogic/Team.h"
#include "serverlogic/Guild.h"
class UserManager {
public:
	UserManager();
	virtual ~UserManager();
private:
	const static ConcurrentHashMap<Channel, User> usersKeyChannel;
	const static ConcurrentHashMap<Integer, User> usersKeyUserId;
	const static ConcurrentHashMap<String, User> usersKeyUserName;
	const static ConcurrentHashMap<String, Team> teams;
	const static ConcurrentHashMap<String, Guild> guilds;
};

#endif /* USERMANAGER_H_ */
