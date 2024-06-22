#include "data_preprocessing.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

std::vector<std::vector<float>> load_data(const std::string &filename) {
    std::ifstream file(filename);
    std::vector<std::vector<float>> data;
    std::string line, cell;
    while (std::getline(file, line)) {
        std::vector<float> row;
        std::stringstream lineStream(line);
        while (std::getline(lineStream, cell, ',')) {
            row.push_back(std::stof(cell));
        }
        data.push_back(row);
    }
    return data;
}

void preprocess_data(std::vector<std::vector<float>> &data) {
    for (auto &row : data) {
        for (auto &value : row) {
            value = value / 10.0;
        }
    }
}
