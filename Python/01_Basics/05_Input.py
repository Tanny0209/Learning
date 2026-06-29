# This program takes two numbers as input from the user, adds them together, and prints the result.
a=input("Enter number 1: ")
b=input("Enter number 2: ")

c= int(a) + int(b)
print("The sum of", a, "and", b, "is", c)


# This is same program as above but with type casting done at the time of input itself.
a=int(input("Enter number 1: "))
b=int(input("Enter number 2: "))
c= a + b
print("The sum of", a, "and", b, "is", c)