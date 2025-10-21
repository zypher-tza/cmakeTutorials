cmake_minimum_required(VERSION 3.31)

project(MILITARY2025JAT VERSION 3.0.2)

set(PRODUCT_YEAR "2025")
set(AUTHOR "Than Zaw Aou")  
set(ProductType "MILITARY2025JAT")

set(MILITARYAPP_VERSION_MAJOR ${PROJECT_VERSION_MAJOR})
set(MILITARYAPP_VERSION_MINOR ${PROJECT_VERSION_MINOR})

configure_file(
    ${CMAKE_SOURCE_DIR}/defaultconfig.in.h
    ${CMAKE_BINARY_DIR}/defaultconfig.h
)

add_executable(zypher src/main.cpp)
target_include_directories(zypher PUBLIC ${PROJECT_BINARY_DIR})

foreach(F IN ITEMS M I L I T A R Y)
    message(STATUS ${F})
endforeach()

message(" ")

set(developer T H A N Z A W A O U)
foreach(G IN LISTS developer)
    message(STATUS " ==> ${G}")
endforeach()

set(VAR 10)
while(VAR)
    message(${VAR})
    math(EXPR VAR "${VAR} - 1")
endwhile()
