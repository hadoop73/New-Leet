cmake_minimum_required(VERSION 3.2)
project(New_Leet)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp header_file.h  visit.h generateParenthesis.h letterCombinations.h numDecodings.h groupAnagrams.h maxArea.h threeSum.h threeSumClosest.h)
add_executable(New_Leet ${SOURCE_FILES} )