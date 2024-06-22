# AWS ML Project

This repository contains the projects and tasks performed at the Hume Center & Amazon Web Services. It includes development of advanced machine learning algorithms, implementation and testing of machine learning models, and integration of AI solutions into AWS infrastructure.

## Project Structure

- **data**: Contains sample data.
- **models**: Contains pre-trained models.
- **src**: Contains source code for various components.
  - **cpp**: C++ code for data preprocessing, analysis, and machine learning.
  - **python**: Python code for training and testing models, preprocessing data, and utility functions.
  - **aws_integration**: Python code for deploying and invoking models on AWS SageMaker.

## How to Build and Run

### Prerequisites

- CMake
- GCC or Clang

### Build C++ Code

```sh
cd src/cpp
mkdir build
cd build
cmake ..
make
./aws_ml_project
