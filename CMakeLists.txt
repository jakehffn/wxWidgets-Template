cmake_minimum_required(VERSION 3.0)

project(filem VERSION 0.1)

include_directories(headers)
 
file(GLOB SOURCES "src/*.cpp")
 
add_executable(filem ${SOURCES})

find_package(wxWidgets REQUIRED gl core base OPTIONAL_COMPONENTS net)
include(${wxWidgets_USE_FILE})
target_link_libraries(filem ${wxWidgets_LIBRARIES})