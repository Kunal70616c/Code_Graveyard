def isPalindrome(s) :
    s1 = s
    s1= "".join(reversed(s1))
    print(s1)
    if s == s1 :
        print ("Palindrome")
    else : 
        print ("not Palindrome")

isPalindrome("Kunal")
