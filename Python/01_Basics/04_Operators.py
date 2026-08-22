# LESSON: Operators in Python
# Purpose: Covers the four main operator families I need - Arithmetic (math),
# Assignment (storing/updating values), Comparison (comparing values to get
# True/False), and Logical (combining True/False conditions).

# Arithemtic Operators
# These perform basic math on numbers: + (add), - (subtract), * (multiply),
# / (divide), % (remainder), ** (power/exponent), // (integer division).
print("\n--- Arithmetic Operators ---")
a=10
b=5
c= a + b  # "c" stores the result of adding a and b: 10 + 5 = 15
print("Addition of A and B is ", c)

# Assisgnment Operators
# These store a value in a variable. The basic one is "=".
# Shorthand versions combine "=" with a math operator:
#   +=  -> add then assign,  -=  -> subtract then assign,  *=  -> multiply then assign
#   Example: e += 3 is exactly the same as writing e = e + 3.
print("\n--- Assignment Operators ---")  #\n is used to print a new line
d=4-2 #assign 4-2 in d
# Python evaluates the right side (4-2 = 2) first, then stores the result in d.
e=6
e+=3 #Increment e by 3
# Before this line e = 6. After it e = 6 + 3 = 9. The new value overwrites the old one.
print("Value of d:", d)
print("Value of e:", e)


# Comparison Operators
# This operator is used to compare two values and returns True or False based on the condition.
# Common ones: < (less than), > (greater than), <=, >=, == (equal to), != (not equal to).
# NOTE: "==" checks equality, while a single "=" is only for assignment.
print("\n--- Comparison Operators ---")
f= 5<4
# Python asks "is 5 less than 4?" The answer is False, so f stores False.
print("Is 5 less than 4? ", f)
# f=5>4 this will give true

g= 5==5
# "5 is equal to 5" is True, so g stores True. (I can try 5==4 to see False.)
print("Is 5 equal to 5? ", g)


# Logical Operators
# This operator is used to combine conditional statements.
#   and -> True only if BOTH sides are True
#   or  -> True if AT LEAST ONE side is True
#   not -> flips a value (True becomes False and vice versa)

print("\n--- Logical Operators ---")
# Truth Table for OR operator
# OR is like a light switch: if either switch is on, the light is on.
# Here I can see or returns True unless BOTH operands are False.
print("True or False is ", True or False)
print("False or False is ", False or False)
print("True or True is ", True or True)
print("False or True is ", False or True)

# Truth Table for AND operator
# AND is strict: the result is True ONLY when every operand is True.
# A single False makes the whole result False.
print("True and False is ", True and False)
print("False and False is ", False and False)
print("True and True is ", True and True)
print("False and True is ", False and True)