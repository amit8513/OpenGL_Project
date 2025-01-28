#include"libs.h"

int main() {
	glfwInit();

	glewExperimental = GL_TRUE;
	if (glewInit() != GLEW_OK)
	{
		std::cout << "not working"<<"n/";
		glfwTerminate();
		throw "Error in GLEW INIT";
	}
	system("PAUSE");
	return 0;
} 