# LESSON: Dictionaries (key-value pairs)
# Purpose: Introduces the dict - a collection that maps KEYS to VALUES so I
# can look data up by name instead of by index. Think of it like a phone book:
# I find a person's number (value) using their name (key).

# Key ideas:
#   - Written with curly braces {} as key: value pairs separated by commas.
#   - "Indexed" by keys: I look up marks["Tanmay"], not a position number.
#   - No duplicate keys allowed (a later key with the same name overwrites).
#   - Keys can be any immutable type: strings, numbers, tuples. Here I even
#     use the integer 92 as a key - valid, though strings are more common.
# Dictionary is a collection of key-value pairs. 
# It is unordered, mutable, indexed, and cannot have duplicate keys.
marks={
    "Tanmay": 100,
    "Rahul": 95,
    "Priya": 98,
    92: "Shubham"  #this is also valid, key can be of any data type
}

print(marks,type(marks))
# Passing two arguments: the dict itself, then type(marks) which returns
# <class 'dict'>.

print(marks["Tanmay"]) # Accessing value using key
# Square brackets with a KEY return that key's value. Here -> 100.
# WARNING: using a key that doesn't exist (e.g. marks["John"]) raises a
# KeyError and crashes the program.

# Dictonary Methods
# These methods are built into every dictionary.

print(marks.items()) # Returns all the key-value pairs in the dictionary
# items() gives a view of (key, value) pairs as tuples, e.g.
# dict_items([('Tanmay', 100), ('Rahul', 95), ...]).
print(marks.keys()) # Returns all the keys in the dictionary
# keys() lists every key: Tanmay, Rahul, Priya, 92.
print(marks.values()) # Returns all the values in the dictionary
# values() lists every value: 100, 95, 98, Shubham.
marks.update({"Tanmay": 99, "Jhon": 97}) # Adding new key-value pair to the dictionary
# update() merges another dict into marks. Two things happen at once:
#   - "Tanmay" already exists, so its value CHANGES from 100 to 99.
#   - "Jhon" is new, so the pair ("Jhon", 97) is ADDED.
print(marks)


marks.get("Rahul") # Returns the value for the specified key
# get() is the SAFE way to fetch a value. Unlike marks["Rahul"], get() never
# crashes on a missing key - it simply returns None instead.
print(marks["Tanmay"]) # Accessing value using key

marks.get("Rahul2") # this will return None as Rahul2 is not present in the dictionary
# "Rahul2" is not a key, so get() quietly returns None (no error).
# print(marks["Rahul2"]) This will give an error as Rahul2 is not present in the dictionary
# But the SAME lookup with square brackets would raise a KeyError, because
# [] demands the key exist. That is the core difference between [] and get().