cmake_minimum_required(VERSION 3.20)
project(cpp_algorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_algorithms "recursive algorithms/recsearch.cpp" "recursive algorithms/recfactorial.cpp" main.cpp "recursive algorithms/recfibonacci.cpp" "recursive algorithms/recMcCarthny.cpp" "recursive algorithms/recreversearray.cpp")
