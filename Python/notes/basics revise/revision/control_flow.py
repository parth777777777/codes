#if else statements
a= 10
b = input("enter num :")
b = int(b)
if a<b:
    print("yes")
elif a==b:
    print("same")
else:
    print("meow")

#short hand if  - when we only have one statement to exucute 
if a<b : print("A is smaller than b")

#shorthand if else 
print("A is smaller than b") if a<b else print("A is larger than B")

#short hand if elif else :
print("smoll") if a<b else print("=") if a==b else print("biggie")

c= 20
if b>a and b<c : print("between a and c")

if a<b:
    if b<c:
        print("between a and c")
    else :
        pass
    
# while loop 
i= 0
while i<15:
    print(i)
    if i==2:
        i+=1
        continue
    if i>12:
        break
    i+=1
    
i = 0
while i<=3:
    print(i)
    i+=1
else :
    print("i is no longer smaller than 3")
   

##for loop 
#print each fruit in a fruit list 
fruits = ["apple","orange","banana"]
for i in fruits:
    print(i)

#loop through a string
game = "Elden Ring"
for x in game:
    if x == "d":
        continue
    print(x)
    if x == "f":
        break

#range() function - range(a) from 0 to a-1
a =0 
for x in range(12):
    a+=x
print(a) 

#range(a,b) from a to b without including b
a =0 
for x in range(12,23):
    a+=x
print(a) 

#nested loops
name = ["a","b","c"]
meow = ["yes","no","no"]
for x in name:
    for y in meow:
        print(x,y)
        
#for loops cant be empty , use pass statement :
for x in range(6):
    pass