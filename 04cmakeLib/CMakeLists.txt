cmake_minimum_required(VERSION 3.31)
project(04cmakelib)

set(SRC_FILES
    src/main.cpp 
)

add_subdirectory(${CMAKE_SOURCE_DIR}/lib)

add_executable(revocoder ${SRC_FILES})
target_include_directories(revocoder PUBLIC lib/)
target_link_libraries(revocoder PUBLIC wifi_lib)