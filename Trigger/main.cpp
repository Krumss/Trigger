#include "first_app.hpp"

#include <cstdlib>
#include <iostream>


int main() {
	Trigger::FirstApp app{};

	try {
		app.run();
	}
	catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}