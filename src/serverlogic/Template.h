/*
 * Template.h
 *
 *  Created on: 2012-9-27
 *      Author: kohachiro
 */

#ifndef TEMPLATE_H_
#define TEMPLATE_H_

#include "tbbmalloc.h"
#include "tbbstring.h"
#include "ConcurrentHashMap.h"

class Template {
public:
	Template(int id, int maxUsers, int regionId);
	virtual ~Template(void);
private:
	const int id;
	const String name;
	const ConcurrentHashMap<String, String> properties;
	const int maxUsers;
	const int regionId;
};

#endif /* TEMPLATE_H_ */
