# PRACTICE SET - my practice wrapping earlier logic inside reusable functions
# Everything from the loops practice set, but now packaged into functions.
# The advantage: I define the logic once and call it whenever I need it,
# passing the number to work on as an argument. Note these functions print
# their result directly instead of returning it.

# Odd Even Checker
# % is the modulo operator (remainder). n%2==0 means n is divisible by 2,
# i.e. even; otherwise it must be odd.
def eo(n):
    if(n%2==0):
        print("Even")
    else:
        print("Odd")

# Factorial 
# n! = n * (n-1) * ... * 1. Multiply the accumulator by every integer from
# 1 to n. The name "sum" is misleading here - it holds a running product.
def fact(n):
    sum = 1
    for i in range(1,n+1):
        sum*=i
    print(sum)


# Reverse number
# Digit-peeling loop: % 10 grabs the last digit, // 10 chops it off, and
# rev=(rev*10)+digit rebuilds the number backwards (123 -> 3 -> 32 -> 321).
def reverse(n):
    rev =0
    while n>0:
        digit = n%10
        rev=(rev*10)+digit
        n//=10
    print(rev)

# Now I actually CALL the functions - a function does nothing until called.
num=int(input("Enter number : "))
eo(num)
fact(num)

rev=int(input("Enter number which you want reverse : "))
reverse(rev)

# Palindrome 
# A palindrome reads the same forwards and backwards. I copy n into ntemp
# and reverse the COPY so the original n stays intact for the comparison
# at the end.
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
