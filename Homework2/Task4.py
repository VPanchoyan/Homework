year = input("Enter a year: ")
if year.isnumeric():
    year = eval(year)
    leap_years = abs(1600 - year) // 4
    print("Leap years between 1600 and {}: {}".format(year,leap_years + 1))
else:
    print("Enter a positive integer!")
