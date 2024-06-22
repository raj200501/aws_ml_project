#ifndef DATA_ANALYSIS_H
#define DATA_ANALYSIS_H

#include <vector>

float calculate_mean(const std::vector<float> &data);
float calculate_std_dev(const std::vector<float> &data, float mean);

#endif
