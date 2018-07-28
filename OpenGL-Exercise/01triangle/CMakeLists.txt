cmake_minimum_required(VERSION 2.8)

project(triangle)
LINK_LIBRARIES(GL)
LINK_LIBRARIES(GLEW)
LINK_LIBRARIES(glfw)
aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})
