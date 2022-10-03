phone_number = input("Enter a phone number: ")
if(len(phone_number) < 12):
    print("Invalid")
else:
    if phone_number[0] != '1':
        if phone_number[0].isnumeric():
            l = phone_number.split('-')
            if(len(l[0]) == 3 and len(l[1]) == 3 and len(l[2]) == 4):
                print("Valid")
            else:
                print("Invalid")
        else:
            print("Invalid")    
    else:
        l = phone_number.split('-')
        if(len(l[0]) == 1 and len(l[1]) == 3 and len(l[2]) == 3 and len(l[3]) == 4):
            print("Valid")
        else:
            print("Invalid")
