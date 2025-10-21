cmake_minimum_required(VERSION 3.31)

project(03cmake)

if(EXISTS ${CMAKE_SOURCE_DIR}/src/main.cpp)
    message("file exists...")
else()
    message(FATAL_ERROR "tza.cpp file not exits.")
endif()
set(SRC_FILES
    src/main.cpp
    src/calc.cpp
)
message(STATUS "Compiling zypher's code....10%")
message(STATUS "Compiling zypher's code....20%")
message(STATUS "Compiling zypher's code....30%")
message(STATUS "Compiling zypher's code....40%")
message(STATUS "Compiling zypher's code....50%")
message(STATUS "Compiling zypher's code....60%")
message(STATUS "Compiling zypher's code....70%")
message(STATUS "Compiling zypher's code....80%")
message(STATUS "Compiling zypher's code....90%")
message(STATUS "Compiling zypher's code....100%")
message("Path=====" ${CMAKE_SOURCE_DIR})
add_executable(zypher ${SRC_FILES})
target_include_directories(zypher PUBLIC include)
