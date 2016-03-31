cmake_minimum_required(VERSION 3.2)
project(New_Leet)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(New_Leet ${SOURCE_FILES} knowbinary.h maxarea.h stock2.h binarysearch.h firstRepeat.h longestDistance.h gift.h header_file.h chkExpression.h countBits.h numDistinct.h balance.h)