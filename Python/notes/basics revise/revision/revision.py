#in python theres no need to declare a varaible . Its created the moment you assign a value to it .
a,b,c = 1 , 2, "parth"
x = 213
name = "parth"
y = 1.2323
print(x)
print(name)
print(y)

#casting
print(str(3)) #x will become '3'
print(int(y)) # y will be casted to integer
print(float(x))

#get the type of the variable in output
print(type(name))

#setting a specific data type to a variable 
number = int(34)

# multi-line strings -- use three double qoutes or three single qoutes
h = """Lorem ipsum dolor sit amet,
consectetur adipiscing elit,
sed do eiusmod tempor incididunt
ut labore et dolore magna aliqua."""
print(h) 

#strings are arrays
greetings= "hellooo how are you?"
print(greetings[2])

#looping a string
for x in greetings:
    print(x)
    
#string length
print(len(greetings))

#check for phrase or a charector in a string usig "in"
print("how" in greetings)

if "how" in greetings:
    print('yes "how" is present in greetings')
    
#check if phrase or charector is not in string using "not in"
print("meow" not in greetings)

name = "ellalaldfdlkfjalk"
print(name[2:6]) #get charectors from index 2 to 6 , without including 6 
print(name[:4]) #get charectors from start to index 4 wihtout including index 4
print(name[4:]) #get charectors from 4 to end

if (a<5 and b>0):
    print("meow")
    
