#include <iostream>

void print_vector(const std::vector<float> &vec) {
    for (const auto &val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

void print_2d_vector(const std::vector<std::vector<float>> &vec) {
    for (const auto &row : vec) {
        for (const auto &val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}
