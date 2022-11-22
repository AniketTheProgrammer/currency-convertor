from currency_converter import CurrencyConverter
cr = CurrencyConverter()
print("\n")
print("Currency convertor......")
dollorValue = int(input("Enter how much dollor you have    "))

toConvert = input("Enter currency code to convert   ").upper()

result = cr.convert(dollorValue , "USD" , toConvert)

print(f"The value of {dollorValue} dollor in {toConvert} is {result}")
