def is_prime(num):
    if num <= 1:
        return False
    for i in range(2,int(num**0.5)+1):
        if num % i == 0:
            return False
    return True

num = int(input("enter number :"))
if is_prime(num):
    print(f"Number {num} is a prime number")
else:
    print(f"Number {num} is not a prime number")
