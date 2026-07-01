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
