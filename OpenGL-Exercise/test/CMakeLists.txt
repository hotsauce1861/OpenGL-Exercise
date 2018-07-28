cmake_minimum_required(VERSION 2.8)

project(test)
LINK_LIBRARIES(glfw)
add_executable(${PROJECT_NAME} "test_glfw.c")

