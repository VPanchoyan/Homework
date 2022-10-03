print('Enter 5 numbers: ')
string = ''
for i in range(5):
    num = input()
    string += num;
    if i != 4:
        string += '+'
print(string)
