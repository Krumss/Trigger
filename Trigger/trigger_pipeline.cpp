#include "trigger_pipeline.h"

#include <fstream>
#include <stdexcept>
#include <iostream>

namespace Trigger {

	TriggerPipeline::TriggerPipeline(const std::string& vertFIlepath, const std::string& fragFilepath) {
		createGraphicsPipeline(vertFIlepath, fragFilepath);
	}

	std::vector<char>TriggerPipeline::readFile(const std::string& filepath) {
		std::ifstream file{ filepath, std::ios::ate | std::ios::binary };

		if (!file.is_open()) {
			throw std::runtime_error("failed to open file: " + filepath);
		}

		size_t fileSize = static_cast<size_t>(file.tellg());
		std::vector<char>buffer(fileSize);

		file.seekg(0);
		file.read(buffer.data(), fileSize);

		file.close();
		return buffer;
	}

	void TriggerPipeline::createGraphicsPipeline(const std::string& vertFilepath, const std::string& fragFilepath) {
		auto verCode = readFile(vertFilepath);
		auto fragCode = readFile(fragFilepath);
	}
}