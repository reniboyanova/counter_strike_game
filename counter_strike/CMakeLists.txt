cmake_minimum_required(VERSION 3.5.1)

project(counter_strike)

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake_helpers/helpers.cmake)

set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/includes)
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
     
add_executable(
    ${PROJECT_NAME}
        ${INC_DIR}/Defines.h
        ${INC_DIR}/Pistol.h
        ${INC_DIR}/Player.h
        ${INC_DIR}/Glock.h
        ${INC_DIR}/DesertEagle.h
        ${INC_DIR}/Battlefield.h
        
        ${SRC_DIR}/main.cpp
        ${SRC_DIR}/Pistol.cpp
        ${SRC_DIR}/Glock.cpp
        ${SRC_DIR}/DesertEagle.cpp
        ${SRC_DIR}/Player.cpp
        ${SRC_DIR}/Battlefield.cpp
)

target_include_directories(
    ${PROJECT_NAME} 
        PRIVATE 
            ${INC_DIR}
)  