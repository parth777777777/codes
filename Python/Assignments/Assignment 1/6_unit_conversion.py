#rupees to dollars 
rupees = float(input("Enter amount in Rupees (₹): "))
exchange_rate = 83.00  # Example exchange rate (₹1 = $0.012)
dollars = rupees / exchange_rate
print(f"₹{rupees:.2f} = ${dollars:.2f}")

#inch_to_feet
inches = float(input("Enter length in inches: "))
feet = inches / 12
print(f"{inches} inches = {feet:.2f} feet")
