# Is input consonant or vowel

char = input("Enter a character: ")
if len(char) == 1 and char.isalpha():
    print(char,"is vowel.") if char in "AaEeIiOoUu" else print(char,"is consonant.")
else:
    print("Enter one character from alphabet!")
