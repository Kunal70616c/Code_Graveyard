def isVow(c):
    vowels = "aeiou"
    if c.lower() in vowels :
        return True
    else :
        return False

def rmBTBVowel(s):
    i = 0
    n = len(s) - 1
    res = ""
    while i <= n :
        if isVow(s[i]) and isVow(s[i+1]) :
            i += 1
            continue
        else:
            res += s[i]
            i += 1
    return res

print(rmBTBVowel("Kunaal"))
