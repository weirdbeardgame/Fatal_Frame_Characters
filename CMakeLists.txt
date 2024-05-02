cmake_minimum_required(VERSION 3.22.1)
Project(Fatal_Character_Tests CXX)

set(CMAKE_CXX_STANDARD 17)

set (SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp ${CMAKE_CURRENT_SOURCE_DIR}/src/FatalFrame1/ff1_plyr.cpp 
${CMAKE_CURRENT_SOURCE_DIR}/src/FatalFrame1/ig_init.cpp)

add_executable(Fatal_Character_Tests ${SOURCES})

target_include_directories(Fatal_Character_Tests PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/headers)