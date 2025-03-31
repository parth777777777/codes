number = int(input("Enter number : "))
count = number
fact = 1
while count>0:
    fact *= count
    count -= 1
print(f"Factorial of {number} is {fact}")