cmake_minimum_required(VERSION 3.0)
set (CMAKE_CXX_STANDARD 17)
project(BuilderPattern)
include_directories("include")
file(GLOB SOURCE "src/*.cc")
add_executable(${PROJECT_NAME} ${SOURCE})