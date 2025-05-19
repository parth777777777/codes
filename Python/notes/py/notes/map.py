#map, filter and reduce
#essentially , these functions allow you to apply a function over a number of iterables, in one fell swoop . 
# map and filter come built in with python , reduce , however requires importing the 'functools' module

# map :
"""
Make an iterator that computes the function using arguments from
each of the iterables. Stops when the shortest iterable is exhausted.
"""
#syntax : map(func, iterable/s) .  since there can be multiple iterables.
# note that the func arguements should be the number of iterables passed onto the map fucntion

#example code : we have a list of number and we want a list of their squares
##traditionally :
my_nums = [1,3,4,5,7,8,1,7,0,5]
squares = []
for num in my_nums:
    sq_num = num**2
    squares.append(sq_num)
print(list(squares)) # we are typecasting to list because map func returns an object of class map
## using map function

squares = map(lambda x : x**2 , my_nums)
# here we use the lambda function to take an input and return its square , with my_nums as the iterable
print(list(squares))

# multiple iterables 
# two lists of arbitrary numbers
x = range(1,100,5) 
y = range(100,200,5)
products = map(lambda x,y : x*y , x,y)
print(list(products))

# in this case both lists had same number of elements , but in case they didnt, say list y was shorter, python would try to find an iterator in x 
# and then when it tries to find one in y and fails, the map function simply returns right there 
# eg, 
x = [1,2,3,4]
y = [1,2,3]
add = map(lambda x,y : x+y , x,y)
print(list(add))

# one more example : we are given a list of circle areas all in 5 decimal prescision , and we are supposed to create a list where are area of circle ,
# has same decimal prescision as its standing in the list (first element has one decimal , etc etc)
circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]
result = map(round, circle_areas,range(1,10))
print(list(result))