@echo off
SET TBBROOT=D:\work\project\orca\deps\tbb
SET TBB_ARCH_PLATFORM=ia32\mingw
SET TBB_TARGET_ARCH=ia32
SET CPATH=%TBBROOT%\include;%CPATH%
SET LIBRARY_PATH=D:\work\project\orca\deps\tbb\build\windows_ia32_gcc_mingw_release;%LIBRARY_PATH%
SET PATH=D:\work\project\orca\deps\tbb\build\windows_ia32_gcc_mingw_release;%PATH%
SET LD_LIBRARY_PATH=D:\work\project\orca\deps\tbb\build\windows_ia32_gcc_mingw_release;%LD_LIBRARY_PATH%
