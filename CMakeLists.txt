cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 14)

project(
    ib_pseudocode
    VERSION 0.1.0
    LANGUAGES C CXX
)

set(src_files
    "src/main.cpp"
    "src/interpretor.cpp"
    "src/interpretor.hpp"
    "src/tokenize.hpp"
)

add_executable(${PROJECT_NAME} ${src_files})