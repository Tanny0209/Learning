# 3 Types to define a string in python
name = "tanmay"
surname= 'Pawar'
address = """123 Main Street """

# Strings are immutable in python
# This means that once a string is created, it cannot be changed

print(name[2]) # print the character at index 2 (n)
print(name[0:3]) #print first 3 characters (Tan)

print(surname[:4]) #print first 4 characters (Pawa)
print(surname[-4:]) #print last 4 characters (awar)


# Slicing
print(address[0:8:2]) #print every 2nd character from index 0 to 8 (1 a t)

# Fucntions of strings
print(len(address)) #print the length of the string (17)
print(address.endswith("Street ")) #print True if the string ends with "Street "
print(surname.count("a")) #print the number of times "a" appears in the string (2)
print(name.capitalize()) #print the string with the first character capitalized (Tanmay)
print(surname.find("w")) #print the index of the first occurrence of "w" (3)
print(address.replace("Main", "Broadway")) #replace "Main" with "Broadway" in the string (123 Broadway Street )

