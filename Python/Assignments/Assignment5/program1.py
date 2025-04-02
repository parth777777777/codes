def perform_division():
    try:
        #take input from user
        n1 = float(input("Enter first number: "))
        n2 = float(input("Enter second number: "))
        #perform division
        result = n1/n2

    except ZeroDivisionError: # error if n2 is zero
        print("Error: Cant divide by Zero")
    except ValueError: # error when any one value isnt numeric
        print("Error: Invalid Input, Ensure value entered is numeric")
    
    else:
        #if no exception occured , print result
        print(f"Result of {n1}/{n2} = {result}")

#function call
perform_division()