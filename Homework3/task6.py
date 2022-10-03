def phone_ends_in_8no_email(di):
    print("Users whose phone ends in 8: ")
    for i in di:
        if i['phone'][-1] == '8':
            print(i['name'])
    print("Users with no email: ")
    for i in di:
        if i['email'] == '':
            print(i['name'])
