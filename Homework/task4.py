# Sum of the digits

num = input("Enter a number: ")
if num.isnumeric():
    num = eval(num)
    temp = num
    sum_of_digs = 0
    while temp != 0:
        sum_of_digs += temp % 10
        temp //= 10
    print("Sum of digits:",sum_of_digs)
else:
    print("Input must be a no negative integer!")
