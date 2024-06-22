import pandas as pd

def preprocess_data(filepath):
    data = pd.read_csv(filepath)
    data[['feature1', 'feature2', 'feature3']] = data[['feature1', 'feature2', 'feature3']] / 10.0
    return data
