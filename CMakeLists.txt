# Define the cmake version
cmake_minimum_required(VERSION 3.20)

# Set the project name and version
project(Sudoku VERSION 1.0)

# Specify the C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# Add the main executable
add_executable(Sudoku main.c generator.c)

# Add the binary tree to the search path for include files
target_include_directories(Sudoku PUBLIC
    "${PROJECT_BINARY_DIR}"                            
)       