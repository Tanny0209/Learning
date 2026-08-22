# ARGUMENTS - my lesson on passing data into functions in different ways
# Functions can receive inputs through parameters. This file shows the
# common ways to supply those inputs: default values, positional arguments,
# keyword arguments, *args (many positional values) and **kwargs (many named
# values).

#This is default args provided 
print("\n--- Default Arguments ---")
# A default value is used when the caller does NOT pass an argument. So
# greet() is the same as greet("Guest"). Defaults make a parameter optional.
def greet(name="Guest"): 
    print("Good Morning",name)


greet()            # no argument -> uses the default "Guest"
greet("Tanmay")    # argument supplied -> overrides the default


# Positional Arguments
print("\n--- Positional Arguments ---")
# Values are matched to parameters by POSITION: the 1st value goes to name,
# the 2nd to age. Because order decides which parameter gets which value,
# this is easy to get wrong (see the second call where age=20 and name="Tanmay").
def student(name,age):
    print(f"Student name is {name} and age is {age}")

student("Tanmay",22)   # name="Tanmay", age=22
student(20,"Tanmay")   # WRONG order: name=20, age="Tanmay"

# Keyword Argument 
print("\n--- Keyword Argument ---")
# Instead of position, I name WHICH parameter each value belongs to.
# Order no longer matters, which is safer and easier to read.
student(age=22,name="Tanmay")


# *args 
print("\n--- Args ---")
# The * before numbers collects ALL positional arguments into a tuple named
# "numbers". This lets one function handle any number of values - here the
# loop adds up however many arguments I pass. Notice how Python's built-in
# print works the same way, accepting any number of items.
def add(*numbers):
    total=0

    for i in numbers:
        total+=i
    print(f"Addition is :- {total}")

add(5,10,15)


# Kwargs
print("\n--- Kwargs ---")
# ** before kwargs collects all the keyword arguments into a dictionary
# (key-value pairs). I passed two named values, so kwargs is
# {"name": "Tanmay", "age": 22}. Useful when a function needs flexible input.
def det(**kwargs):
    print("Kwargs dictionary:", kwargs)


det(name="Tanmay",age=22)