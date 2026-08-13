# LESSON: Getting user input and type casting
# Purpose: Teaches input() (reading text the user types) and type casting
# (converting one data type into another, here str -> int).

# input("message"): pauses the program, prints the prompt, waits for the user
# to type, and RETURNS WHAT THEY TYPED AS A STRING (text). Pressing Enter
# submits the answer. The returned text is stored in the variable.

# Why is the type cast needed? The user's typed "5" is the TEXT '5', not the
# NUMBER 5. Adding text would CONCATENATE ("5"+"3" = "53"), which is wrong.
# int(a) converts the text into a real number so math works correctly.
a=input("Enter number 1: ")
b=input("Enter number 2: ")

# int(a) converts the string in a into an integer; same for b.
# Then a + b does real addition: e.g. int("5") + int("3") = 8.
c= int(a) + int(b)
# Note: the "a" and "b" printed below still show the ORIGINAL strings.
print("The sum of", a, "and", b, "is", c)


# This is same program as above but with type casting done at the time of input itself.
# SAME LOGIC, SHORTER CODE: instead of casting on a separate line, we wrap
# input() INSIDE int(), so the variable stores a number right away.
# int(  input(...)  ) -> the inner function runs first, then the outer one
# converts its result. Python always evaluates inner parentheses first.
a=int(input("Enter number 1: "))
b=int(input("Enter number 2: "))
# Here a and b are already integers, so no extra cast is needed.
c= a + b
print("The sum of", a, "and", b, "is", c)