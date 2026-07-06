# Odd Even Checker
def eo(n):
    if(n%2==0):
        print("Even")
    else:
        print("Odd")

# Factorial 
def fact(n):
    sum = 1
    for i in range(1,n+1):
        sum*=i
    print(sum)


# Reverse number
def reverse(n):
    rev =0
    while n>0:
        digit = n%10
        rev=(rev*10)+digit
        n//=10
    print(rev)

num=int(input("Enter number : "))
eo(num)
fact(num)

rev=int(input("Enter number which you want reverse : "))
reverse(rev)

# Palindrome 
def palindrome(n):
    ntemp=n
    rev =0
    while ntemp>0:
        digit = ntemp%10
        rev=(rev*10)+digit
        ntemp//=10
    
    if n == rev:
        print("Number is palindrome")
    else : 
        print("Number is not a palindrome")

pal=int(input("Enter number to check palindrome : "))
palindrome(pal)
