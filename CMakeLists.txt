cmake_minimum_required(VERSION 3.19)
project(TareaExtra_DatosII_3_4)

set(CMAKE_CXX_STANDARD 14)

include_directories(EC4)

add_executable(TareaExtra_DatosII_3_4
        EC4/main.cpp
        EC4/sha1.cpp
        EC4/sha1.h
        EC4/sha1_loc.h)
