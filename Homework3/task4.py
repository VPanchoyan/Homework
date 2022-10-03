l = [2,3,5,7,11,13,17,19,23,29,31,37,41,43,47]
new_list = [l[i] - l[i - 1] for i in range(1,len(l))]
print(new_list)
print("Maximum gap size:",max(new_list))
print("Precentage of gaps with size 2: {}%".format(new_list.count(2)/len(new_list)*100))
