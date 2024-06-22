import boto3
import joblib
from sagemaker import get_execution_role
from sagemaker.estimator import Estimator

# Load model
model = joblib.load('../../models/rf_model.pkl')
joblib.dump(model, 'model.joblib')

# Upload model to S3
s3 = boto3.client('s3')
s3.upload_file('model.joblib', 'your-s3-bucket', 'model/model.joblib')

# Define the estimator
role = get_execution_role()
container = '382416733822.dkr.ecr.us-east-1.amazonaws.com/linear-learner:latest'
estimator = Estimator(container,
                      role,
                      train_instance_count=1,
                      train_instance_type='ml.m4.xlarge',
                      output_path='s3://your-s3-bucket/model/')

# Deploy model
estimator.fit({'train': 's3://your-s3-bucket/model/model.joblib'})
