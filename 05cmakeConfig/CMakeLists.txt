cmake_minimum_required(VERSION 3.31)
project(TECTCAPP VERSION 2.3)
set(PRODUCT_YEAR "2025")

configure_file(defaultconfig.h.in defaultconfig.h)

add_executable(hellobot src/main.cpp)
target_include_directories(hellobot PUBLIC ${PROJECT_BINARY_DIR})