#define     GL_GLEXT_PROTOTYES
#include <iostream>
#include <stdio.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>


void framebuffer_size_change_callback(GLFWwindow* window,int width,int height);

const char* vet_shader =
    "layout (location = 0) in vec3 aPos;"
    "void main()" \
    "{"
    "gl_Position = vec4(aPos.x,aPos.y,aPos.z,1.0);"
    "}";

const char* frag_shader =
    "out vec4 FragColor;\n"
        "void main(){"
        "FragColor = vec4()";


float vet_points[] = {
    0.5f,   0.5f,   0.0f,
    -0.5f,  0.5f,   0.0f,
    0.0f,   0.5f,   0.0f,
};

int main(char argc,char** argvv){

    unsigned int VBO;
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
    glfwSetFramebufferSizeCallback(window,framebuffer_size_change_callback);

    glGenBuffers(1,&VBO);
    glBindBuffer(GL_ARRAY_BUFFER,VBO);
    glBufferData(GL_ARRAY_BUFFER,sizeof(vet_points),vet_points,GL_STATIC_DRAW);

    unsigned int m_vet_shader;
    m_vet_shader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(m_vet_shader,1,&vet_shader,NULL);
    glCompileShader(m_vet_shader);

    printf("%s,%s,%s",name,biaoshifu,version);



    glfwMakeContextCurrent(window);
    while (!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();

    return 0;
}



void framebuffer_size_change_callback(GLFWwindow* window,int width,int height){
    glViewport(0,0,width,height);
}


