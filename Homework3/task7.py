l = [[1,2,3,4,5],[2,3,4,5,6],[3,4,5,6,7],[4,5,6,7,8],[5,6,7,8,9]]
flat_list = [i  for sublist in l for i in sublist]
dic = {}
for i in l:
    for j in i:
        dic[j] = flat_list.count(j)
dic = sorted(dic.items(),key = dic.values())
print("Most common numbers are:",end = ' ')
for i in range(1,4):
    print(dic.keys()[-i])
    
