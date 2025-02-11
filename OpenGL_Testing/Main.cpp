#include"libs.h"

void framebuffer_resize_callback(GLFWwindow* window, int fbW, int fbH)
{
	glViewport(0,0,fbW,fbH);
}

bool loadShaders(GLuint& program) {
	//2:46 - 10
}

int main() {
	 
	glfwInit();

	//Create window
	const int WINDOW_WIDTH = 640; 
	const int WINDOW_HEIGHT = 480;
	int framebufferWidth = 0;
	int framebufferHight = 0;

	glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,4);
	glfwWindowHint(GLFW_RESIZABLE,GLFW_TRUE);

	GLFWwindow* window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "GLFW Testing", NULL, NULL);

	glfwSetFramebufferSizeCallback(window, framebuffer_resize_callback);
	//glfwGetFramebufferSize(window, &framebufferWidth, &framebufferHight);
	//glViewport(0, 0, framebufferWidth, framebufferHight);

	glfwMakeContextCurrent(window);

	glewExperimental = GL_TRUE;

	if (glewInit() != GLEW_OK)
	{
		std::cout << "not working"<<"n/";
		glfwTerminate();
	}
	while (!glfwWindowShouldClose(window)) {
		//UPDATE INPUT
		//allow to get event like click close button
		glfwPollEvents();

		//setting the window color
		glClearColor(0.f,0.f,1.f,0.f);

		//clearing colors
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

		//Draw

		//End Draw
		//the program paint the image at the back and swap it to the front every pixel
		glfwSwapBuffers(window);
		//clearing the back of the program to draw a new
		glFlush();
	}
	glfwTerminate();

	return 0;
} 