#pragma once

#include "trigger_window.h"
#include "trigger_pipeline.h"
namespace Trigger {
	class FirstApp {
		public:
			static constexpr int WIDTH = 800;
			static constexpr int HEIGHT = 600;

			void run();

		private:
			TriggerWindow TriggerWindow{ WIDTH, HEIGHT, "Hi" };
			TriggerPipeline TriggerPipeline{ "shaders/simple_shader.vert.spv", "shaders/simple_shader.frag.spv" };
	};
}