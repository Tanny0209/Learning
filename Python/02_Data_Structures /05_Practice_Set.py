# LESSON: Practice problems applying strings, lists, tuples, and their methods
# Purpose: Exercises that combine input(), string methods, list building with
# append()/sort(), and built-in helpers sum() and count().

print("Strings")

# Greet the user with their name
# STRING CONCATENATION: the + operator joins strings together (glues them).
# Here the stored "Hello " + typed name + "!" become one greeting string.
# If "Tanmay" is typed, greet becomes "Hello Tanmay!". (Notice the + operator
# behaves differently on strings than on numbers - that's operator overloading.)
name=input("Enter your name : ")
greet="Hello " + name + "!"
print(greet)

# Detect Double Spaces in a String
# find() returns the index of the FIRST occurrence of its argument.
# Searching for "  " (two spaces) finds double spaces in the text. If the
# double space isn't there, find() returns -1 (Python's way of saying
# "not found"). The result -1 or an index is what we print.
text=input("Enter a string : ")
print(text.find("  ")) #print the index of the first occurrence of double spaces in the string (-1 if not found)



print("\nLists And Tuples")

# take 3 fruits from the user and store them in a list
# PATTERN: start with an EMPTY list [], then use append() to add items one
# by one. This builds the list dynamically based on user input. append()
# always adds to the END, so the order matches the order typed.
fruits=[]
fruits.append(input("Enter a fruit : "))
fruits.append(input("Enter another fruit : "))
fruits.append(input("Enter one more fruit : "))
print(fruits)


# take marks of 3 students from the user and sort them in ascending order
# NOTE the difference from the fruit example: input is wrapped in int(),
# because marks are NUMBERS. Sorting strings vs numbers gives different
# results, so casting matters. Try sorting ["10", "9"] vs [10, 9] to see!
marks=[]
marks.append(int(input("Enter marks of student 1 : ")))
marks.append(int(input("Enter marks of student 2 : ")))
marks.append(int(input("Enter marks of student 3 : ")))
marks.sort()
print(marks) #sort the list of marks in ascending order and print it


# take 3 numbers and sum them using a list
# sum(list) is a built-in function that adds up every number in the list,
# saving you from writing total = n[0] + n[1] + n[2] manually.
number=[]
number.append(int(input("Enter a number : ")))
number.append(int(input("Enter another number : ")))
number.append(int(input("Enter one more number : ")))
print("Sum of the numbers in the list is : ", sum(number)) #sum the numbers in the list and print it


# count the number of zeros in a tuple
# count(x) works on tuples (and strings/lists): it returns how many times x
# appears. Here 0 appears at positions 2 and 4, so count(0) is 2. This is a
# neat example of why count() beats manually looping over every element.
t=(1,20,0,40,0,53,402)
print("Number of zeros in the tuple is : ", t.count(0)) #count the number of zeros in the tuple and print it
