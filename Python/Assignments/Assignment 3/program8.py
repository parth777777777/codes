def add(x, y):	
    return x + y
def subtract(x, y): 	
    return x - y
def multiply(x, y):
    return x * y
def divide(x, y):
    if y == 0:
        return "Error! Division by zero."
    else:
        return x / y
# Main program
print("Simple Python Calculator")

num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

# Menu for the user to choose an operation
print("\nSelect operation:")
print("1. Add")
print("2. Subtract")
print("3. Multiply")
print("4. Divide")

# Taking user input for operation choice
choice = input("\nEnter the operation (1/2/3/4): ")

# Perform the operation based on user choice
if choice == '1':
    print(f"The result of addition is: {add(num1, num2)}")
elif choice == '2':
    print(f"The result of subtraction is: {subtract(num1, num2)}")
elif choice == '3':
    print(f"The result of multiplication is: {multiply(num1, num2)}")
elif choice == '4':
    print(f"The result of division is: {divide(num1, num2)}")
else:
    print("Invalid input! Please choose a valid operation.")
