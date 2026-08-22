# FUNCTIONS - my lesson on reusable blocks of code
# A function lets me give a name to a piece of logic and call it any number
# of times. The "def" keyword starts a definition, followed by the function
# name and parentheses. Whatever the function "returns" becomes the value of
# the function call, which I can store in a variable.

# square takes one input (a parameter called "a") and returns a formatted
# string describing its square. "return" sends a value back to the caller
# and immediately ends the function.
def square(a):
    return f"Square of {a} is {a*a}"

# greet takes a name and returns a personalised message.
# Without "return", functions return the special value None; returning
# f-strings lets me hand the finished text back to the caller.
def greet(name):
    return f"Good Morning {name}"


print("\n--- Greet Function ---")
name=input("Enter your Name : ")
g=greet(name)
print("Greeting:", g)

# The value passed in (here: the user's number) is called an "argument".
# Inside square it is known by the parameter name "a".
print("\n--- Square Function ---")
a=int(input("Enter number which you want square : "))
s=square(a)
print("Square result:", s)