while True:
    char = input("Enter a charector : ")
    if len(char) != 1:
        print("please input a single charector")
    else:
        if char.isdigit():
            print(f"Given charector '{char}' is a digit")
            break
        elif char.isupper():
            print(f"Given charector '{char} is a upper case charector'")
            break
        elif char.islower():
            print(f"Given charector '{char} is a lower case charector'")
            break
        else:
            print(f"Given charector '{char} is a special case charector'")
            break
