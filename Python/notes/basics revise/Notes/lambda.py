#One of Pythons most useful (and for beginners, confusing) tools is the lambda expression. lambda expressions allow us to create "anonymous" functions. This basically means we can quickly make ad-hoc functions without needing to properly define a function using def.

#Function objects returned by running lambda expressions work exactly the same as those created and assigned by defs. There is key difference that makes lambda useful in specialized roles:

def square(num):
    return num**2

print(square(3))

#we usually dont assign lambda expression to a variable but for the sake of understading we have used it here
square= lambda num: num**2
print(square(3))
