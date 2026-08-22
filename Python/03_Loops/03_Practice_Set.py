# PRACTICE SET - my practice applying conditionals and loops to real problems
# This file is a collection of classic beginner exercises. Each one uses the
# same building blocks: if/elif/else to branch, for/while loops to repeat,
# and the % (modulo) and // (integer division) operators to pull digits
# out of a number one at a time.

# Find greatest of four numbers
# Each branch checks "am I bigger than all three others?". The "and"
# operator requires every comparison to be True. The final else assumes
# it must be d, since if none of a,b,c was biggest, d is the only one left.
print("\n--- Find Greatest Of Four Numbers ---")
a=int(input("Enter first number: "))
b=int(input("Enter second number: "))
c=int(input("Enter third number: "))
d=int(input("Enter fourth number: "))
if a>b and a>c and a>d:
    print("Greatest number is:",a)
elif b>a and b>c and b>d:
    print("Greatest number is:",b)
elif c>a and c>b and c>d:
    print("Greatest number is:",c)
else:
    print("Greatest number is:",d)



# check pass or fail if marks are greater than 33 of each subject and overall more than 40% then pass otherwise fail    
# Average percentage = (sum of marks) / (number of subjects). The condition
# chains FOUR tests with "and" - ALL of them must be True to pass: every
# single subject at least 33 AND the average strictly above 40.
print("\n--- Check Pass Or Fail ---")
e=int(input("Enter marks of Maths subject: "))
f=int(input("Enter marks of English subject: "))
g=int(input("Enter marks of Science subject: "))

total_percentage=(e+f+g)/3

if e>=33 and f>=33 and g>=33 and total_percentage>40:
    print("You are pass.")
else:
    print("You are fail.")



# print even numbers
# range(1,101) gives 1..100. The % operator (remainder) tells me evenness:
# i%2==0 means i divides by 2 exactly, so i is even.
print("\n--- Print Even Numbers ---")
for i in range(1,101):
    if i%2==0:
        print("Even number:", i)


# print multiplication table of a number
# f-strings let me embed values directly into text with {braces}.
# One loop prints all 10 rows of the table for the typed-in number.
print("\n--- Multiplication Table Of A Number ---")
mul=int(input("Enter a number to print multiplication table: "))
for i in range(1,11):
    print(f"{mul} x {i} = {mul*i}")


# Factorial
# n! = n * (n-1) * ... * 2 * 1. I multiply the accumulator by every number
# from 1 up to num. Starting from 1 is essential - starting from 0 would
# wipe the product out to 0.
print("\n--- Factorial ---")
num=int(input("Enter a number to find factorial: "))
factorial=1
for i in range (1,num+1):
    factorial*=i

print(f"Factorial of {num} is: {factorial}")


# Count digits in a number
# Trick: turn the number into a string with str(number), then a for loop
# naturally walks through each character. Counting loop iterations = digits.
print("\n--- Count Digits In A Number ---")
number=int(input("Enter a number to count digits: "))
count =0

for i in str(number):
    count+=1
print(f"Count of digits in {number} is: {count}")


# reverse a number
# Digit-extraction recipe: % 10 gives the last digit, // 10 chops it off.
# I build rev backwards: rev = (rev * 10) + digit, so 123 -> 3 -> 32 -> 321.
# Note //= is integer division: 123 // 10 = 12 (fraction dropped), which is
# exactly what I need to peel digits off an integer.
print("\n--- Reverse A Number ---")
rev_number=int(input("Enter a number to reverse: "))
rev=0

while rev_number>0:
    digit=rev_number%10
    rev=(rev*10)+digit
    rev_number//=10

print(f"Reverse of the number is: {rev}")


# check if a number is a palindrome or not
# A palindrome reads the same forwards and backwards (like 1221). I save the
# original in temp, reverse a COPY into rev (so the original is untouched),
# then compare the two.
print("\n--- Palindrome Check ---")
palindrome_number=int(input("Enter a number to check palindrome: "))
temp=palindrome_number
rev=0
while temp>0:
    digit=temp%10
    rev=(rev*10)+digit
    temp//=10

if palindrome_number == rev:
    print(f"{palindrome_number} is a palindrome.")
else:
    print(f"{palindrome_number} is not a palindrome.")


# Find largest digit in a number
# Same digit-peeling loop, but now I compare each digit against the best one
# found so far and remember it. largest_digit starts at 0 because every digit
# is 0-9, so any digit will beat it.
print("\n--- Find Largest Digit In A Number ---")
largest_digit_number=int(input("Enter a number to find largest digit: "))
largest_digit=0

while largest_digit_nuber>0:
    digit = largest_digit_number%10
    if digit>largest_digit:
        largest_digit=digit
    largest_digit_number//=10   
print(f"Largest digit in the number is: {largest_digit}")


# To check if a number is an Armstrong number or not
# An Armstrong number (3 digits) equals the sum of its digits each raised to
# the third power, e.g. 153 = 1^3 + 5^3 + 3^3. ** is the power operator, so
# digit**3 means digit cubed.
print("\n--- Armstrong Number Check ---")
arms_num = int(input("Enter a number to check if it is a armstrong number: "))
sum=0
temp=arms_num       

while temp>0:
    digit=temp%10
    sum+=digit**3
    temp//=10

if sum==arms_num:
    print(f"{arms_num} is an Armstrong number.")
else:
    print(f"{arms_num} is not an Armstrong number.")



# To check if a number is prime or not
# A prime has no divisors except 1 and itself. I try every number from 2 up
# to prime_num-1. If ANY divides evenly (remainder 0) it is not prime and I
# break out early. The "else" attached to a for loop is special: it runs only
# when the loop finishes WITHOUT a break - i.e. when no divisor was found.
print("\n--- Prime Number Check ---")
prime_num=int(input("Enter a number to check if it is prime or not: "))
if prime_num>1:
    for i in range(2,prime_num):
        if prime_num%i==0:
            print(f"{prime_num} is not a prime number.")
            break
    else:
        print(f"{prime_num} is a prime number.")



# Find how mnay even and odd digit in the number
# One loop does double duty: peel off a digit, check if the DIGIT (not the
# whole number) is even, and bump the matching counter.
print("\n--- Count Even And Odd Digits ---")
e_o_num = int(input("Enter the number : "))
temp=e_o_num
even_count=0
odd_count=0

while temp > 0:
    digit=temp%10
    temp//=10
    if digit%2==0:
        even_count=even_count+1
    else:
        odd_count=odd_count+1

# \n inside the f-string prints a new line, so the two counts are stacked.
print(f"Even digits in number are {even_count}\nOdd digits in number are {odd_count}")

