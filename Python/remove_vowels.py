def rmVowels(s) :
    vowels = "aeiouAEIOU"
    return "".join(char for char in s if char not in vowels)

inpStr = input("enter string:") 
print("Result:: ", rmVowels(inpStr))
