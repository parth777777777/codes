class NameOfClass():
    
    # __init__ method is a special method which is automatically called when we create an instance of the class (object)
    def __init__(self, param1, param2): #self allows for __init__ method connect to the instance of the class and allows it to refer to itself .
        #it is the constuctor method of the class
        
        ##Attributes   
        ## We take  in the arguement 
        ## Assign it using self.attribute_name
        self.attribute_name = param1 
        self.param2 = param2  #by convention we use the same name for method arguemnt and attribute since its more cleaner and easier to understand 
    
    def some_method(self): #this is a normal method which can be called on any instance of the class
        print(self.param2)
        
#calling class methods 
NameOfClass("hello", "world").some_method()

class Cat():
    
    species = "Mammal" #this will be common for every instance of class Cat
    def __init__(self,eat,eep):
        self.eat = eat
        self.eep = eep

    def meow(self):
        print("MEOWWW!! im {}".format(self.eat))
    
mycat = Cat("hungy","All day")
print(mycat.eat)
print(mycat.species)
mycat.meow()


class Circle():
    
    pi = 3.14
    
    def __init__(self, radius):
        self.radius = radius

    def get_circumference(self):
        print(round(self.pi*self.radius,3),"units") 
    
    def get_area(self):
        #pi can be called using Circle.pi aswell since its a class attritube and not a method attribute . And people prefer it this way to improve readability of code 
        print(round(Circle.pi*self.radius**2,3),"square units")
        
c1 = Circle(3.1)
c1.get_circumference()
c1.get_area()