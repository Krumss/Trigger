#pragma once

#include "trigger_device.hpp"

//std
#include <string>
#include <vector>

namespace Trigger {
	class TriggerPipeline {
		public: 
			TriggerPipeline(const std::string& vertFilepath, const std::string& fragFilepath);
	private: 
		static std::vector<char>readFile(const std::string& filepath);

		void createGraphicsPipeline(const std::string& vertFIlepath, const std::string& fragFilepath);
	};
}