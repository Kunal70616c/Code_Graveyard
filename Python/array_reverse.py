def arrReverse(arr):
    n = len(arr)
    front,end = 0, n - 1
    while front<=end :
        arr[front],arr[end] = arr[end],arr[front]
        front += 1
        end -= 1
    print(arr)

arrReverse([1,2,3,4,5,6])

# Built in functuion

array = [1, 2, 3, 4, 5]
array.reverse()
print(array)


