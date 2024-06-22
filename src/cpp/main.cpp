#include "data_preprocessing.h"
#include "data_analysis.h"
#include "ml_model.h"
#include <iostream>

int main() {
    std::string filename = "../../data/sample_data.csv";
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

    std::vector<float> feature1;
    for (const auto &row : data) {
        feature1.push_back(row[0]);
    }
    float mean = calculate_mean(feature1);
    float std_dev = calculate_std_dev(feature1, mean);

    std::cout << "Feature1 Mean: " << mean << ", Std Dev: " << std_dev << std::endl;

    // Prepare data for model training
    std::vector<std::vector<float>> X(data.size(), std::vector<float>(data[0].size() - 1));
    std::vector<int> y(data.size());
    for (size_t i = 0; i < data.size(); ++i) {
        X[i] = {data[i][0], data[i][1], data[i][2]};
        y[i] = static_cast<int>(data[i][3]);
    }

    RandomForest model(10);
    model.fit(X, y);
    std::vector<int> predictions = model.predict(X);

    std::cout << "Predictions:" << std::endl;
    for (const auto &pred : predictions) {
        std::cout << pred << " ";
    }
    std::cout << std::endl;

    return 0;
}
