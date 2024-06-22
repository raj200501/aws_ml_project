#include "data_preprocessing.h"
#include <iostream>

int main() {
    std::string filename = "data/sample_data.csv";
    std::vector<std::vector<float>> data = load_data(filename);

    std::cout << "Original data:" << std::endl;
    for (const auto &row : data) {
        for (const auto &value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    preprocess_data(data);

    std::cout << "Preprocessed data:" << std::endl;
    for (const auto &row : data) {
        for (const auto &value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
