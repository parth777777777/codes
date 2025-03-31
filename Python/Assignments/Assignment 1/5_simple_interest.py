p = float(input("Enter the Principal Amount : "))
r = float(input("Enter the Rate of Interest (% per year): "))
t = float(input("Enter the Time Period (in years): "))
si = (p*r*t)/100
print("\n--- Interest Calculation ---")
print(f"Principal Amount: ₹{p:.2f}")
print(f"Rate of Interest: {r:.2f}% per year")
print(f"Time Period: {t:.2f} years")
print(f"Simple interest : {si}")