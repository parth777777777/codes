import re

def validate_phone_number(phone_number):
    phone_pattern = re.compile(r'\(?\d{3}\)?[-.\s]?\d{3}[-.\s]?\d{4}$')
    return re.match(phone_pattern,phone_number)

def validate_email(email_addr):
    email_pattern = re.compile(r'[a-zA-z0-9-.+-]+@[a-zA-z0-9-]+\.[a-z]+$')
    return re.match(email_pattern,email_addr)

phone_num = input("enter phoen number: ")
email_addr = input("enter email addr: ")

if validate_phone_number(phone_num):
    print("Phone number is valid.")
else:
    print("Invalid phone number format.")

if validate_email(email_addr): # Validate email address
    print("Email address is valid.")
else:
    print("Invalid email address format.")
