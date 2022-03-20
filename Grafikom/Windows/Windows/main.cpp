#include <iostream>
#include <gl/gl.h>
#include <GLFW/glfw3.h>
#include <glad/glad.h>
//Deklarasi fungsi handler ketika window diresize
void framebuffer_size_callback(GLFWwindow* window, int width, int height);

//Deklarasi fungsi handler inputan pengguna
void processInput(GLFWwindow *window);

//Konstanta ukuran window yang akan dibuat
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

int main()
{
    std::cout << "Hello world!" << std::endl;
    return 0;
}
