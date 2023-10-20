#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <stdexcept>

class HelloTriangleApplication {
public:
	void run();

private:
	GLFWwindow* window;
	VkInstance instance;

	void initWindow();

	void initVulkan();

	void mainLoop();

	void cleanup();

	void createInstance();
};