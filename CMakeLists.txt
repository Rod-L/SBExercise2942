cmake_minimum_required(VERSION 3.22)
project(SBExercise2942)

set(CMAKE_CXX_STANDARD 14)

add_executable(SBExercise2942 src/main.cpp src/Shape.cpp include/Shape.h src/CommonShapes.cpp include/CommonShapes.h)

target_include_directories(SBExercise2942 PUBLIC include)
