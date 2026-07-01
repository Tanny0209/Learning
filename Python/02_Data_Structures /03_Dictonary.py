# Dictionary is a collection of key-value pairs. 
# It is unordered, mutable, indexed, and cannot have duplicate keys.
marks={
    "Tanmay": 100,
    "Rahul": 95,
    "Priya": 98,
    92: "Shubham"  #this is also valid, key can be of any data type
}

print(marks,type(marks))

print(marks["Tanmay"]) # Accessing value using key

# Dictonary Methods

print(marks.items()) # Returns all the key-value pairs in the dictionary
print(marks.keys()) # Returns all the keys in the dictionary
print(marks.values()) # Returns all the values in the dictionary
marks.update({"Tanmay": 99, "Jhon": 97}) # Adding new key-value pair to the dictionary
print(marks)


marks.get("Rahul") # Returns the value for the specified key
print(marks["Tanmay"]) # Accessing value using key

marks.get("Rahul2") # this will return None as Rahul2 is not present in the dictionary
# print(marks["Rahul2"]) This will give an error as Rahul2 is not present in the dictionary