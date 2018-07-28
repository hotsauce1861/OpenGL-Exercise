cmake_minimum_required(VERSION 2.8)

project(OpenGL-Exercise)
#SET(EXECUTABLE_OUTPUT_PATH $(PROJECT_SOURCE_DIR)/../bin)
add_executable(${PROJECT_NAME} "main.cpp")
add_subdirectory(test)
add_subdirectory(01triangle)
