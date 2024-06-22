import boto3
import json

# Define the client
client = boto3.client('sagemaker-runtime')

# Define the endpoint name
endpoint_name = 'your-endpoint-name'

# Define the input data
input_data = {'instances': [[0.1, 1.2, 3.1]]}
input_data_json = json.dumps(input_data)

# Invoke the endpoint
response = client.invoke_endpoint(
    EndpointName=endpoint_name,
    ContentType='application/json',
    Body=input_data_json
)

# Parse response
result = json.loads(response['Body'].read().decode())
print(f'Response: {result}')
