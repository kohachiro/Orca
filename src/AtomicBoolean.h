/*
 * AtomicBoolean.h
 *
 *  Created on: 2012-9-28
 *      Author: dahoo
 */

#ifndef ATOMICBOOLEAN_H_
#define ATOMICBOOLEAN_H_

#include "tbb/include/tbb/atomic.h"
typedef tbb::atomic<bool> AtomicBoolean;

#endif /* ATOMICBOOLEAN_H_ */
