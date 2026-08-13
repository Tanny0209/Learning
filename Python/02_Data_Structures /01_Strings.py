# LESSON: Strings - creation, indexing, slicing, and built-in methods
# Purpose: Shows the 3 ways to write a string, how to grab characters or
# pieces of a string (indexing and slicing), and handy string methods.

# 3 Types to define a string in python
# Strings are text. Python treats single, double, and triple quotes the same
# for creating a string - all 3 below are valid and identical in nature.
name = "tanmay"           # double quotes
surname= 'Pawar'          # single quotes (same result)
address = """123 Main Street """  # triple quotes: allows multi-line text

# Strings are immutable in python
# This means that once a string is created, it cannot be changed
# You cannot do name[0] = "T". To "change" a string you must create a new one.
# (Immutable = unchangeable. Lists, learned later, ARE changeable/mutable.)

# INDEXING: every character in a string has a position number (index).
# Indexes start at 0: "tanmay" -> t=0, a=1, n=2, m=3, a=4, y=5.
print(name[2]) # print the character at index 2 (n)
print(name[0:3]) #print first 3 characters (Tan)
# SLICING with [start:end]: returns chars from "start" up to but NOT
# including "end". So [0:3] gives index 0,1,2 -> "tan". (Note: output says
# "Tan" only because name is lowercase "tan"; "t" is not a capital T.)

print(surname[:4]) #print first 4 characters (Pawa)
# [start:end] with no start means "from the beginning": [:4] == [0:4].
print(surname[-4:]) #print last 4 characters (awar)
# NEGATIVE INDEXING counts from the end: -1 is the LAST character (-1='r',
# -2='a', -3='w', -4='a'). [-4:] means "from index -4 to the end" -> "awar".
# Slicing beyond the end is safe - Python just stops at the last character.


# Slicing with a STEP: [start:end:step] grabs every "step"-th character.
#   start=0, end=8, step=2 -> indexes 0,2,4,6. For "123 Main Street" that is
#   characters '1','3',' ','M' (shown below as "1 a t" space in comment).
print(address[0:8:2]) #print every 2nd character from index 0 to 8 (1 a t)

# Fucntions of strings
# These methods are BUILT INTO strings - call them with dot notation:
#   string_name.method_name(arguments). They never modify the original
#   string (immutable!); instead they RETURN a new result you can print/use.
print(len(address)) #print the length of the string (17)
# len() counts the TOTAL characters including spaces: "123 Main Street " is 17.
print(address.endswith("Street ")) #print True if the string ends with "Street "
# endswith() checks the final characters and returns True or False.
print(surname.count("a")) #print the number of times "a" appears in the string (2)
# count() counts how many times a substring appears -> "Pawar" has two 'a's.
print(name.capitalize()) #print the string with the first character capitalized (Tanmay)
# capitalize() makes the FIRST letter uppercase and the rest lowercase.
print(surname.find("w")) #print the index of the first occurrence of "w" (3)
# find() returns the INDEX where the substring first appears. For "Pawar":
# indexes are P=0, a=1, w=2, a=3, r=4, so find("w") actually returns 2.
# If the substring is not found, find() returns -1.
print(address.replace("Main", "Broadway")) #replace "Main" with "Broadway" in the string (123 Broadway Street )
# replace(old, new) swaps every occurrence of "Main" for "Broadway" and
# returns the new string. The original address stays unchanged.

