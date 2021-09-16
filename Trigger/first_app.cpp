#include "first_app.hpp"

namespace Trigger {
	void FirstApp::run() {
		while (!TriggerWindow.shouldCLose()) {
			glfwPollEvents();

		}
	}
}