#include "data_analysis.h"
#include <cmath>
#include <numeric>

float calculate_mean(const std::vector<float> &data) {
    float sum = std::accumulate(data.begin(), data.end(), 0.0);
    return sum / data.size();
}

float calculate_std_dev(const std::vector<float> &data, float mean) {
    float accum = 0.0;
    for (const auto &value : data) {
        accum += (value - mean) * (value - mean);
    }
    return std::sqrt(accum / (data.size() - 1));
}
