cmake_minimum_required(VERSION 3.16)
project(CLion)

set(CMAKE_CXX_STANDARD 20)

#include_directories(/usr/include/python3.9)

find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})
include_directories(/home/sergey/.local/lib/python3.9/site-packages/numpy/core/include)

set(GCC_COVERAGE_COMPILE_FLAGS "-lpython3.9")
set(GCC_COVERAGE_LINK_FLAGS    "-lpython3.9")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}")

set(DIRS
        IEC61850
        )
foreach(dir ${DIRS})
    add_subdirectory(${dir})
endforeach()

#set(CMAKE_CXX_CPPCHECK "cppcheck")
#if (CMAKE_CXX_CPPCHECK)
#    list(
#            APPEND CMAKE_CXX_CPPCHECK
#            "--enable=warning"
#            "--inconclusive"
#            "--force"
#            "--inline-suppr"
#            "--output-file=cppcheck.txt"
#    )
#endif()
#cppcheck --enable=warning --inconclusive --force --output-file=cppcheck.txt .

#gprof
# cmake -DCMAKE_CXX_FLAGS=-pg -DCMAKE_EXE_LINKER_FLAGS=-pg -DCMAKE_SHARED_LINKER_FLAGS=-pg  .
# make clean && make && ./CLion
# появляется gmon.out
# gprof CLion gmon.out > gprof.txt
add_executable(CLion main.cpp)
target_link_libraries(CLion PUBLIC ${DIRS} ${PYTHON_LIBRARIES})

#Создание Результата
#g++ main.cpp -o result -I/usr/include/python3.8 -I/home/sergey/.local/lib/python3.8/site-packages/numpy/core/include -lpython3.8

#SET(GCC_COVERAGE_COMPILE_FLAGS "python3.8")
#SET(GCC_COVERAGE_LINK_FLAGS    "python3.8")
#set (CMAKE_CXX_FLAGS "python3.8")
#SET(CMAKE_CXX_FLAGS -lpython3.8)
#-lpython3.8
#set(CMAKE_CXX_STANDARD 11)
#include_directories(/usr/include/python3.9)
#include_directories(/home/admin/.local/lib/python3.9/site-packages/numpy/core/include)
#set(GCC_COVERAGE_COMPILE_FLAGS "-lpython3.8")
#set(GCC_COVERAGE_LINK_FLAGS    "-lpython3.8")
#set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
#set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}")
#add_executable(test main.cpp)
