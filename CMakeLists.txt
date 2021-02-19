cmake_minimum_required(VERSION 3.0)

project(wxWidgets_Template VERSION 0.1)

include_directories(headers)
 
file(GLOB SOURCES "src/*.cpp")
 
add_executable(wxWidgets_Template ${SOURCES})

find_package(wxWidgets REQUIRED gl core base OPTIONAL_COMPONENTS net)
include(${wxWidgets_USE_FILE})
target_link_libraries(wxWidgets_Template ${wxWidgets_LIBRARIES})