products = {}
print("Enter products and values: (if you are done enter 'end')")
while True:
    prod = input('Product name: ')
    if prod == 'end':
        break;
    price = input('Price: ')
    products[prod] = price
while True:
    query = input("Enter product name for info: ")
    if query == 'end':
        break;
    if query in products.keys():
        print('Price:',products[query])
    else:
        print("No such product!")
