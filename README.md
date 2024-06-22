# AWS ML Project

This repository contains the projects and tasks performed at the Hume Center & Amazon Web Services. It includes development of advanced machine learning algorithms, implementation and testing of machine learning models, and integration of AI solutions into AWS infrastructure.

## Project Structure

- **data**: Contains sample data.
- **models**: Contains pre-trained models.
- **src**: Contains source code for various components.
  - **cpp**: C++ code for data preprocessing.
  - **python**: Python code for training and testing models, preprocessing data, and utility functions.
  - **aws_integration**: Python code for deploying and invoking models on AWS SageMaker.

## How to Run

### Prerequisites

- Docker
- Python 3.8+
- AWS CLI configured

### Build Docker Image

```sh
docker build -t aws-ml-project .
