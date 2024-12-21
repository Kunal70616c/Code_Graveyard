def stringAnalysis(s):
    space,vowel,const = 0, 0, 0
    for char in s:
        if char.lower() in 'aeiou':
            vowel += 1
        elif char.isalpha() :
            const += 1
        elif char.isspace() :
            space += 1
    return vowel, const, space

inpStr = input("Enter String:")
vowel, const, space = stringAnalysis(inpStr)
print("Vowel: ",  vowel)
print("Consonant: ",  const)
print("Space: ",  space)
