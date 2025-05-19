"""Filter:
    while map() passes each element in the iterable through a function and returns the result of all elements having passed through the func,
    filter() ,first of all, requires the function to return boolean values and then passes each element in the iterable through the function,
    'filtering' all those with which return false.

    syntax : filter(func,iterable)

    Note:
        1. unlike map() , only 1 iterable is required for filter()
        2. The func arguement in filter() requires a boolean return type, if it doesnt return bool ,filter simply returns the iterable passed to it
"""

#eg: Filter students who passed the exam 
exam_result = {"student1" : "pass" , "student2": "fail", "student3": "pass", "student4": "fail"}
def check_passed(student_key):
    return exam_result[student_key] == "pass"

passed = filter(check_passed, exam_result)
print(list(passed))

#eg : palindrome detector
dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")
palindromes = filter(lambda word : word == word[::-1], dromes)
print(list(palindromes))