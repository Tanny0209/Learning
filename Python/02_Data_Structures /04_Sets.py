# LESSON: Sets - my lesson on unique elements and set operations
# Purpose: Introduces the set, a collection that stores UNIQUE values in no
# particular order, and its methods add(), union(), and intersection().

# What is a set? Written with curly braces {}, like a dictionary but WITHOUT
# colons. Key properties:
#   - UNORDERED: no index, so I CANNOT do s[0].
#   - NO DUPLICATES: each value appears only once.
#   - MUTABLE: I can add/remove elements.
# This makes sets perfect for removing duplicates or membership checks.

s={1,2,3,4,5} # this is a set
print(s, type(s))
# type(s) confirms it is <class 'set'>.

b={} # this will create an empty dictionary, not a set
# TRICKY! Empty curly braces {} make an empty DICT, not a set. This is a
# common beginner trap - the braces are ambiguous.
e=set() # this is an empty set
# To make an empty set I must use the set() constructor with no arguments.
print(b, type(b))   
print(e, type(e))

# Set Methods
s.add(6) # add an element to the set
# add() inserts one element. Adding 6 again later would do nothing, because
# sets reject duplicates silently.
print(s)

s1={1,5,18,4}
s2={23,1,45,7}

print(s1.union(s2)) # union of two sets
# union() combines BOTH sets into one, keeping only unique values. Result:
# every element of s1 and s2 with duplicates (like 1) appearing only once.
# Note: union() does NOT change s1 or s2 - it returns a brand new set.
print(s1.intersection(s2)) # intersection of two sets
# intersection() returns only the elements that appear in BOTH sets.
# Here only 1 is shared, so the result is {1}.
# If nothing matched, the result would be an empty set().
