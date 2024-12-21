# Case 1 : [1,2,3,4,5]
def input_array_format() :
    arr = list(map(int, input().strip("[]").split(",")))
    return arr

# Case 2 : 1 2 3 4 5
def input_spaced_array() :
    arr = list(map(int, input().split()))
    return arr

# Case 3 : 1,2,3,4,5
def input_CSV() :
    arr = list(map(int, input().split(',')))
    return arr
