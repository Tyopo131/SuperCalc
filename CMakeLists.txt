cmake_minimum_required(VERSION 3.31.5)

# Declare project
project(SuperCalc)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)
set(SOURCE_FILES
	"src/main.cpp"
	"src/mathtree.cpp"
	"src/editor.cpp"
)
add_executable(SuperCalc ${SOURCE_FILES})
target_include_directories(SuperCalc PRIVATE ${CMAKE_SOURCE_DIR}/include/SuperCalc)
