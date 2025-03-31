import requests

def get_exchange_rate(from_currency, to_currency , api_key):
    url = f"https://v6.exchangerate-api.com/v6/{api_key}/latest/{from_currency}" 
    response = requests.get(url)
    # Parse the JSON response
    data = response.json()
    
    if response.status_code==200 and data.get("result") == "success":
        #checks if "conversion_rates" exists in data dictionary
        conversion_rates = data.get("conversion_rates", {})
        #if statement is ran if it does exist in the dictionary 
        if conversion_rates:
            #get the exchange rate from the dictionary 
            exchange_rate=  conversion_rates.get(to_currency)
            #if exchange_rate does exist in the dictionary for the target currency if statement returns the exchange rate
            if exchange_rate:
                return exchange_rate
            else:
                print(f"Error: Target currency does not exist in database")
                return None
        else:
            print(f"Error: Failed to fetch exchange rates ")
            return None
    else:
        print(f"Error: Failed to fetch exchange rates ")
        return None
#function to convert amount
def converter(amount, exchange_rate):
    return amount*exchange_rate

#main interface to get input and everything else
def converter_interface():
    active = True
    while active:
        from_currency = input("Enter the base currency (eg. USD): ").upper()
        to_currency = input("Enter the target currency (eg. INR): ").upper()
        amount = float(input("Enter the amount to convert : "))

        api_key = 'c1579450de80f9997b4b9e85'
        
        exchange_rate = get_exchange_rate(from_currency, to_currency, api_key)
        if exchange_rate:
            converted_amount = converter(amount, exchange_rate)
            print("------------------------------------")
            print(f"{amount} {from_currency} is equal to {converted_amount:.3f} {to_currency}")
            print("------------------------------------")
        else:
            print("Conversion failed , try again. ")
        print("")  
        print("1. Restart") 
        print("2. Exit")
        choice = int(input("Enter Choice (1 or 2): "))
        while choice not in [1,2] :
            choice = int(input("Enter valid Choice (1 or 2): "))
        if choice==1:
            active=True
        else:
            print("Thanks for using currency converter , now fuck off ")
            active=False
        
if __name__ == "__main__":
    converter_interface()
    
    