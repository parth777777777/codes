import requests

url= f"https://v6.exchangerate-api.com/v6/c1579450de80f9997b4b9e85/latest/USD"
response = requests.get(url)
print(response.json())