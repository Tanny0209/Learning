# Find greatest of four numbers

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

e=int(input("Enter marks of Maths subject: "))
f=int(input("Enter marks of English subject: "))
g=int(input("Enter marks of Science subject: "))

total_percentage=(e+f+g)/3

if e>=33 and f>=33 and g>=33 and total_percentage>40:
    print("You are pass.")
else:
    print("You are fail.")



# print even numbers
for i in range(1,101):
    if i%2==0:
        print(i)


# print multiplication table of a number
mul=int(input("Enter a number to print multiplication table: "))
for i in range(1,11):
    print(f"{mul} x {i} = {mul*i}")


# Factorial
num=int(input("Enter a number to find factorial: "))
factorial=1
for i in range (1,num+1):
    factorial*=i

print(f"Factorial of {num} is: {factorial}")


# Count digits in a number
number=int(input("Enter a number to count digits: "))
count =0

for i in str(number):
    count+=1
print(f"Count of digits in {number} is: {count}")


# reverse a number
rev_number=int(input("Enter a number to reverse: "))
rev=0

while rev_number>0:
    digit=rev_number%10
    rev=(rev*10)+digit
    rev_number//=10

print(f"Reverse of the number is: {rev}")


# check if a number is a palindrome or not
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
largest_digit_number=int(input("Enter a number to find largest digit: "))
largest_digit=0

while largest_digit_nuber>0:
    digit = largest_digit_number%10
    if digit>largest_digit:
        largest_digit=digit
    largest_digit_number//=10   
print(f"Largest digit in the number is: {largest_digit}")


# To check if a number is an Armstrong number or not
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