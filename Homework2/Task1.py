weight = input("Enter a weight: ")
if weight.isnumeric():
  weight = eval(weight)
  if weight >= 0:
    print("Weight =",2.2 * weight,"pounds")
  else:
    print("Input must be non-negative!")
else:
  print("Input must be an non-negative integer!")
