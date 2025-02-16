#include <editor.hpp>
#include <thread>
#include <sstream>
#include <translations.hpp>
#include <optional>
#include <fstream>
#include <cstdlib>
#include <future>
#include <filesystem>

std::string editor::create_temp_filename() {
	const std::thread::id thread_id = std::this_thread::get_id();
	std::ostringstream stream;
	stream << strings::editor::filename;
	stream << thread_id;
	return stream.str();
}

std::future<std::pair<int, std::string>> editor::launch_specified(const std::string& editor_command, const std::string filename, bool async, std::launch async_launch_policy) {
	if (!std::filesystem::exists(filename)) {
		std::ofstream file(filename);
		file.close();
	}

	
	if (async) {
		return std::async(
			async_launch_policy, // Set launch policy

			// Lambda to run (code to run on another thread)
			[editor_command, filename]() -> std::pair<int, std::string> {
				
				int return_code = system((editor_command + " " + filename).c_str());
				std::ifstream read_temp_file(filename);
				std::stringstream file_content;
				file_content << read_temp_file.rdbuf();
				
				return { return_code, file_content.str() };
			}
		);
	}
	else {
		int return_code = system((editor_command + " " + filename).c_str());
		std::ifstream read_temp_file(filename);
		std::stringstream file_content;
		file_content << read_temp_file.rdbuf();
		std::promise<std::pair<int, std::string>> promise;
		std::future<std::pair<int, std::string>> temp = promise.get_future();
		promise.set_value({ return_code, file_content.str() });
		return temp;
	}
}
