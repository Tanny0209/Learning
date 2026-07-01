print("Strings")

# Greet the user with their name
name=input("Enter your name : ")
greet="Hello " + name + "!"
print(greet)

# Detect Double Spaces in a String

text=input("Enter a string : ")
print(text.find("  ")) #print the index of the first occurrence of double spaces in the string (-1 if not found)



print("\nLists And Tuples")

# take 3 fruits from the user and store them in a list
fruits=[]
fruits.append(input("Enter a fruit : "))
fruits.append(input("Enter another fruit : "))
fruits.append(input("Enter one more fruit : "))
print(fruits)


# take marks of 3 students from the user and sort them in ascending order
marks=[]
marks.append(int(input("Enter marks of student 1 : ")))
marks.append(int(input("Enter marks of student 2 : ")))
marks.append(int(input("Enter marks of student 3 : ")))
marks.sort()
print(marks) #sort the list of marks in ascending order and print it


# take 3 numbers and sum them using a list
number=[]
number.append(int(input("Enter a number : ")))
number.append(int(input("Enter another number : ")))
number.append(int(input("Enter one more number : ")))
print("Sum of the numbers in the list is : ", sum(number)) #sum the numbers in the list and print it


# count the number of zeros in a tuple
t=(1,20,0,40,0,53,402)
print("Number of zeros in the tuple is : ", t.count(0)) #count the number of zeros in the tuple and print it
