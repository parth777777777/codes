number = int(input("Enter number to generate multiplication table :"))
multiples = int(input("How many multiples to calculate?  "))

for i in range(1,multiples+1):
    print(f"{number} x {i} = {number*i}")