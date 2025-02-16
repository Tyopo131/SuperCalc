#pragma once

#include <utility>
#include <string>
#include <optional>
#include <future>

namespace editor {
	std::string create_temp_filename();
	std::future<std::pair<int, std::string>> launch_specified(const std::string& editor_command, const std::string filename, bool async = true, std::launch async_launch_policy = std::launch::async);
}
