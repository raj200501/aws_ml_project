import pandas as pd
from sklearn.ensemble import RandomForestClassifier
import joblib

# Load data
data = pd.read_csv('../../data/sample_data.csv')

# Split data
X = data[['feature1', 'feature2', 'feature3']]
y = data['label']

# Train model
model = RandomForestClassifier(n_estimators=100)
model.fit(X, y)

# Save model
joblib.dump(model, '../../models/rf_model.pkl')
