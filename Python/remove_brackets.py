def rmBrack(s) :
    bracks = "(){}[]"
    return "".join(char for char in s if char not in bracks)
def rmBrackLoop(s):
    res = ""
    for c in s:
        if c == '(' or c == ')' :
            continue
        res += c
    return res

inpStr = input("enter string:") 
print("Result:: ", rmBrack(inpStr))
print("Result:: ", rmBrackLoop(inpStr))
