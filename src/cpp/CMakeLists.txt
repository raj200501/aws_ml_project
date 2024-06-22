cmake_minimum_required(VERSION 3.10)
project(aws_ml_project)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(aws_ml_project
    src/main.cpp
    src/data_preprocessing.cpp
    src/data_analysis.cpp
    src/ml_model.cpp
    src/utils.cpp
)
