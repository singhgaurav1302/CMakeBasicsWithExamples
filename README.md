# CMakeBasicsWithExamples

Repo contains basic examples of using CMake.
Use below commands to build individual projects.
I have used mingw and cmake on windows environment, so there is one extra step which needs to be performed.

## Build Commands
`mkdir build`

`cd build`

`cmake ..`

`mingw32-make`

## For mingw users 
(Run below once to create cache, if build folder already contains files this might not work as expected. So use it after cleaning build folder)

`cmake -G "MinGW Makefiles" ..`

## TODO
Using shared library (dll) in code
