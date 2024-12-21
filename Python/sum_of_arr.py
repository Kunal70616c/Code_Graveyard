def sumArr(arr):
    n = len(arr)
    i , sumTotal = 0,0
    while i < n:
        sumTotal += arr[i]
        i +=1
    print(sumTotal)

sumArr([1,2,3,4,5])
