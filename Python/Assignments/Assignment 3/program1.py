#printing a triangle 
rows = int(input("Enter height (in rows) of your traingle: "))

#loop through all rows to print whitespace and asterisks
for i in range(1,rows+1) :
    print(' '* (rows - i), end= '')
    print('*'* ((2*i)-1))
