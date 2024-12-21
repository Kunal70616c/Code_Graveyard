def sumString(s):
    res = 0 
    for c in s :
        if c.isnumeric():
            res += int(c)
        else: 
            continue
    return res

print(sumString("K9u8n5a3"))
