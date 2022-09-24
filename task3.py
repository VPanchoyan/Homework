# Fibonacci n-th number

def fibonacci(n):
    if n == 1 or n == 2:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)

n = input("Enter a number: ")
if n.isalpha() or eval(n) <= 0:
    print("Input is not valid! Must be a positive integer!")
else:
    n = eval(n)
    num = fibonacci(n)
    print("Fibonacci {} number:".format(n),num)
