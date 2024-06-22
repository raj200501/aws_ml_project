#ifndef DATA_PREPROCESSING_H
#define DATA_PREPROCESSING_H

#include <vector>
#include <string>

std::vector<std::vector<float>> load_data(const std::string &filename);
void preprocess_data(std::vector<std::vector<float>> &data);

#endif
