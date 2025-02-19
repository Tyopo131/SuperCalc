#include <editor.hpp>
#include <iostream>

int main() {
#ifdef __APPLE__
	auto values = editor::launch_specified("open -a TextEdit", "temp_file").get();
	std::cout << values.first << std::endl << values.second;
#elif _WIN32
	auto values = editor::launch_specified("notepad", "temp_file").get();
	std::cout << values.first << std::endl << values.second;
#elif __linux__
	auto values = editor::launch_specified("nano", "temp_file").get();
	std::cout << values.first << std::endl << values.second;
#endif
}
