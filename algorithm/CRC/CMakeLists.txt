cmake_minimum_required(VERSION 3.5)
project(crc_algorithm)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -g -O3 -std=c++11")

include_directories(./)

add_executable(crc_calc_sample ./crc16.cc ./crc_calc_sample.cc)
