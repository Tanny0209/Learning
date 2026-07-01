a=int(input("Enter your age: "))

if a>=18:
    print("You are eligible to vote.")

elif a<0 or a==0:
    print("Invalid age entered.")

else:
    print("You are not eligible to vote.")


# Multiple If-Else Statements

#  this program will print 2 grade if we enter marks which satisfy the both if conditions.
b=int(input("Enter your marks: "))

if b>=90:
    print("Grade: A") #this is an independent if statement

# this following if else are connected
if b>=80 and b<90:
    print("Grade: B")

else:
    print("Grade: C")