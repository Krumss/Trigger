#pragma once

#include <string>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

namespace Trigger {
	class TriggerWindow {
		public: 
			TriggerWindow(int w, int h, std::string name);
			~TriggerWindow();

			bool shouldCLose() { return glfwWindowShouldClose(window); }

			void createWindowSurface(VkInstance instance, VkSurfaceKHR* surface);

		private:
			void initWindow();

			const int width;
			const int height;

			std::string windowName;
			GLFWwindow *window;
	};
}