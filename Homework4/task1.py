file = open("Eng-ArmDictionary.txt",'r')
dictionary = {}
while file.realine() != "":
    pair = file.readline()
    dictionary[pair[:pair.index("-")]] = pair[pair.index("-") + 1 :]
file.close();
