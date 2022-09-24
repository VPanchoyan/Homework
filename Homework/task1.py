# Is number even or odd?

number = input("Enter a number: ")
if number.isnumeric():
    number = eval(number)
    print(number,"is odd.") if number % 2 else print(number,"is even.")
else:
    print("Input is not valid! Must be an integer.")

