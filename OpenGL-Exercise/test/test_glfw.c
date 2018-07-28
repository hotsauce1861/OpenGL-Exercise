#include <stdio.h>
#include <GLFW/glfw3.h>

int main(char argc,char** argv){

    GLFWwindow* window;
    if(!glfwInit()){
        return -1;
    }
    window = glfwCreateWindow(640, 480,"Glfw test",NULL,NULL);
    if(NULL == window){
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    while (!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}
