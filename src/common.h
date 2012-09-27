#pragma once
#include "tbb_string.h"
#include "../deps/tbb/include/tbb/atomic.h"
#include "../deps/tbb/include/tbb/concurrent_vector.h"
#include "../deps/tbb/include/tbb/concurrent_hash_map.h"
#include "../deps/tbb/include/tbb/tbbmalloc_proxy.h"

typedef tbb::atomic<int> AtomicInteger;
typedef tbb::atomic<bool> AtomicBoolean;
typedef int Integer;
typedef bool boolean;

#define ConcurrentHashMap tbb::concurrent_hash_map
#define ConcurrentVector tbb::concurrent_vector

using namespace std;
using namespace tbb;
