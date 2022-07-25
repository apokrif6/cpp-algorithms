cmake_minimum_required(VERSION 3.20)
project(cpp_algorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_algorithms "recursive algorithms/recsearch.cpp" "recursive algorithms/factorial.cpp" main.cpp "recursive algorithms/fibonacci.cpp" "recursive algorithms/McCarthny.cpp")
