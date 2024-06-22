import pandas as pd
from sklearn.metrics import accuracy_score
import joblib

# Load data
data = pd.read_csv('../../data/sample_data.csv')

# Split data
X = data[['feature1', 'feature2', 'feature3']]
y = data['label']

# Load model
model = joblib.load('../../models/rf_model.pkl')

# Predict
predictions = model.predict(X)

# Evaluate
accuracy = accuracy_score(y, predictions)
print(f'Model accuracy: {accuracy * 100:.2f}%')
