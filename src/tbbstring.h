/*
 * tbbstring.h
 *
 *  Created on: 2012-9-28
 *      Author: kohachiro
 */

#ifndef TBBSTRING_H_
#define TBBSTRING_H_


#include <string>
#include "tbb/include/tbb/tbb_allocator.h"
typedef std::basic_string<char,std::char_traits<char>,tbb::tbb_allocator<char> > String;


#endif /* TBBSTRING_H_ */
