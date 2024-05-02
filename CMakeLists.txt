cmake_minimum_required(VERSION 3.22.1)
Project(Fatal_Character_Tests CXX)

set(CMAKE_CXX_STANDARD 17)

set (SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp ${CMAKE_CURRENT_SOURCE_DIR}/src/FatalFrame1/plyr/ff1_plyr_ctrl.cpp 
${CMAKE_CURRENT_SOURCE_DIR}/src/FatalFrame1/game/ig_init.cpp ${CMAKE_CURRENT_SOURCE_DIR}/src/FatalFrame1/game/ingame.cpp)

add_executable(Fatal_Character_Tests ${SOURCES})

target_include_directories(Fatal_Character_Tests PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/headers 
${CMAKE_CURRENT_SOURCE_DIR}/headers/FatalFrame1/game ${CMAKE_CURRENT_SOURCE_DIR}/headers/FatalFrame1/plyr)