x = input("Enter x: ")
y = input("enter y: ")
if(x.isnumeric() and y.isnumeric()):
    x = eval(x)
    y = eval(y)
    if(y - x != 0 and x - y != 0):
        print("|x - y| / (x + y) =",abs(x - y) / (x + y))
    else:
        print("Denominator can`t be 0!")
else:
    print("x and y must be integers!")
