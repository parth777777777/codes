import re
# Function to read the file and extract information using regex
def extract_data(file_path):
    # Define regex patterns
    email_pattern = r'[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}'
    phone_pattern = r'\b(\d{3}[-.\s]?)?(\d{3})[-.\s]?(\d{4})\b'
    date_pattern = r'\b(0[1-9]|1[0-2])\/(0[1-9]|[12][0-9]|3[01])\/\d{4}\b'
    # Open and read the text file
    with open(file_path, 'r') as file:
        content = file.read()
    # Extract data using regex
    emails = re.findall(email_pattern, content)
    phone_numbers = re.findall(phone_pattern, content)
    dates = re.findall(date_pattern, content)
    # Clean up phone numbers (remove extra tuples)
    phone_numbers = [''.join(phone) for phone in phone_numbers]
    # Print extracted information
    print("Extracted Email Addresses:")
    for email in emails:
        print(email)
    print("\nExtracted Phone Numbers:")
    for phone in phone_numbers:
        print(phone)
    print("\nExtracted Dates (MM/DD/YYYY):")
    for date in dates:
        print(date)
# Test the function with a file path
file_path = 'Assignment6\sample_data.txt'  # Replace with the path to your text file
extract_data(file_path)
