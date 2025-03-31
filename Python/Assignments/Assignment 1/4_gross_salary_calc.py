BS = int(input("Enter basic salary : "))
DA = 0.7 * BS
TA = 0.3 * BS 
HRA = 0.1 * BS 
GS = BS + DA + TA + HRA

print("---SALARY BREAKDOWN---")
print(f"Basic salary : {BS}")
print(f"Dearness allowance : {DA}")
print(f"Travel allowance : {TA}")
print(f"House rent allowance : {HRA}")
print(f"Gross salary = {GS}")
