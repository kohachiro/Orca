# make tbb in mingw use this command:
# mingw32-make compiler=gcc arch=ia32 runtime=mingw tbb
# g++ -o test_malloc_lib_unload.exe -g -O0 -DTBB_USE_DEBUG -DUSE_WINTHREAD
# -D_WIN32_WINNT=0x0501 -DMINGW_HAS_SECURE_API=1 -D__MSVCRT_VERSION__=0x0700
# -msse -mthreads -m32 -march=i686 -fno-rtti -fno-exceptions -D__TBBMALLOC_BUILD=1
# -I../../src -I../../src/rml/include -I../../include -I../../src/tbbmalloc 
# -I../../src/tbbmalloc ../../src/test/test_malloc_lib_unload.cpp -lpsapi test_malloc_lib_unload_dll.dll    -Wl,--enable-auto-import

CXXFLAGS =	-I.. -I../../deps -O2 -g -Wall -fmessage-length=0

OBJS =	launcheruv.o ../core/Debug/libcore.a ../../deps/uv/uv.a ../../deps/tbb/build/windows_ia32_gcc_mingw_release/tbb.dll ../../deps/tbb/build/windows_ia32_gcc_mingw_release/tbbmalloc_proxy.dll

LIBS = -lws2_32 -lpsapi -liphlpapi

TARGET = launcheruv.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
