cmake_minimum_required(VERSION 3.5)
project(latlon)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -g -O3 -std=c++11")

add_executable(calc_dist_with_latlon ./calc_dist_with_lat_lon.cc)

