#include <stdlib.h>
#include <stdio.h>

#include <GL/glad.h>
#include <GLFW/glfw3.h>

// print error to stderr
void error_callback(int error, const char* description)
{
    fprintf(stderr, "Error: %s\n", description);
}

// called when a key is pressed
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	puts("Callback");
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
		glfwSetWindowShouldClose(window, true);
		puts("Escape");
	}
}

int main()
{

	glfwSetErrorCallback(error_callback);

	// initialize glfw
	if (!glfwInit()) {
		puts("Can't initialize glfw");
		exit(EXIT_FAILURE);
	}
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

}
