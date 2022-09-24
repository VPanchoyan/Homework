# Drawing a square

n = input("Enter the side size of the square: ")
if n.isnumeric():
    n = eval(n)
    for i in range(n):
        if i == 0 or i == n - 1:
             print('*' * n)
        else:
             print('*' + ' ' * (n - 2) + '*')
else:
    print("Sqaure side size must be an integer!")
