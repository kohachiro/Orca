#pragma once
#include <string>
#include "tbb/tbb_allocator.h"
typedef std::basic_string<char,std::char_traits<char>,tbb::tbb_allocator<char> > String;