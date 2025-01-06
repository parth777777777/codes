import pandas as pd 
from matplotlib import pyplot as plt

i = 0        #initial investment
d= 25000     #monthly investment via SIP
n= 0         #number of years
r=11         #rate of interest
M = i        #total amount

while n<10: 
    M += 12*d + (M+12*d)*(r/100)
    p = M-(i+12*d*(n+1))
    n +=1
    print(f'YEAR {n}\n')
    print(f'Total amount = {round(M)}')
    print(f'Amount invested = {round(i+12*d*n)}')
    print(f'Profit made = {round((M-(i+12*d*n)))}\n')
