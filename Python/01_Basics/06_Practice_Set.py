# LESSON: Practice problems combining input(), int(), operators, and f-strings
# Purpose: Three mini-problems that reinforce everything learned so far -
# taking input, casting to int, using the % (modulo) and ** (power) operators,
# and printing values with f-strings.

# ---------- Problem 1: Remainder ----------
# The % (modulo) operator divides two numbers and returns the REMAINDER.
# Example: 10 % 3 = 1 (because 10 = 3*3 + 1, so 1 is left over).
# This is very common in programming (e.g. checking if a number is even).
print("\n Remainder")
a=int(input("Enter number which is to be divided : "))
b=int(input("Enter number by which first number is to be divided : "))

c=a%b  # stores the remainder of a divided by b
print("Remainder is : ",c)

# ---------- Problem 2: Average ----------
# Average = (sum of all values) / (how many values there are).
# Note: (d+e+f)/3 gives a float result (e.g. 6.666...). If we used // instead
# (integer division) it would round down to a whole number.
print("\n Average")
d=int(input("Enter numbers 1 : "))
e=int(input("Enter numbers 2 : "))
f=int(input("Enter numbers 3 : "))

g=(d+e+f)/3
print("Average of three numbers is : ",g)

# ---------- Problem 3: Square ----------
# The ** operator raises a number to a power: h**2 means h squared (h*h).
# For example 5**2 = 25 and 2**3 = 8.
print("\n Square")
h=int(input("Enter number which square is to be found : "))
i=h**2
# F-STRING (formatted string): the "f" before the quote means Python will
# look for {placeholders} and insert the variable values into the text.
#   f"Square of the {h} is : {i}"  ->  e.g. "Square of the 5 is : 25"
# f-strings are the modern, readable way to build text with variables.
print(f"Square of the {h} is : {i}")
