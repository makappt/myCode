#include <iostream>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
int main() {
	//output levels of different information
	spdlog::info("Hello, World!");
	spdlog::warn("Hello, World!");
	spdlog::error("Hello, World!");
	spdlog::critical("Hello, World!");
	std::cout << "--------------------------------" << std::endl;
	//output to console
	auto console = spdlog::stdout_color_mt("console");
	console->info("Hello, World!");
	console->warn("Hello, World!");
	console->error("Hello, World!");
	console->critical("Hello, World!");
	return 0;
}
