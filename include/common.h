#pragma once
#include "tbb_string.h"
#include "tbb/atomic.h"

#include "tbb/concurrent_vector.h"
#include "tbb/concurrent_hash_map.h"
#include "tbb/tbbmalloc_proxy.h"

typedef tbb::atomic<int> AtomicInteger;
typedef tbb::atomic<bool> AtomicBoolean;
typedef int Integer;
typedef bool boolean;

#define ConcurrentHashMap tbb::concurrent_hash_map
#define ConcurrentVector tbb::concurrent_vector

using namespace std;
using namespace tbb;