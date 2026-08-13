# LESSON: Variables and Python Data Types
# Purpose: Introduces variables (names that store values) and Python's basic
# data types: int, float, str, bool, and None.

# What is a variable? It is a named box in memory where you can store a value.
#   a = 30  ->  the name "a" now refers to the number 30.

# DYNAMIC TYPING: In Python, a variable can hold ANY type of value, and it
# can even change type later. You never declare a type; Python figures it out
# from the value you assign.

a=30 #This  a is a variable it stores the value 30
print(a)

# Naming rules for variables:
#   - Must start with a letter (a-z, A-Z) or underscore (_), NOT a number.
#   - Can only contain letters, numbers, and underscores.
#   - Names are case-sensitive (Name and name are different).
#   - Should be descriptive (e.g. student_marks, not x) for readability.
# 32a=56 below is invalid because it starts with a number.
# Variables should not start with a number, it should start with a letter or underscore.
# 32a=56 (This will cause a syntax error)

# DataTypes in Python
# Each value in Python has a type, which decides what operations you can
# do with it and how it is stored in memory. The type() function returns
# the type of any value.

# 1. int store whole numbers (no decimal point, e.g. 10, -5, 0)
a=10
print(type(a)) #This will print the data type of variable a
# type(a) returns <class 'int'> which Python prints to tell you a is an integer.

# 2. float store decimal numbers (numbers with a fractional part)
b=10.5
print(type(b))
# Even 10.0 is a float, not an int, because of the decimal point.

# 3. str store text (sequences of characters wrapped in single or double quotes)
c="Hello, World!"
print(type(c))
# Strings are used for words, sentences, names, messages, etc.

# 4. bool store boolean values (logical: True or False only)
d=True
print(type(d))
# Booleans are the result of comparisons (e.g. 5 > 3) and drive if/else decisions.

#5. none store the absence of a value (think of it as an empty/null marker)
e=None
print(type(e))
# None is often used to say "this variable exists but holds nothing yet."
# Note: None, True, False all start with a capital letter in Python.