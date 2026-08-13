# LESSON: Lists vs Tuples (mutable vs immutable)
# Purpose: Compares Python's two main ordered collections. A LIST can be
# changed after creation (mutable); a TUPLE cannot (immutable). Knowing the
# difference helps me pick the right tool and avoid bugs.

# List
print("List")
#List can contain different data types
# A list is an ordered, changeable collection written with square brackets [].
# Elements are separated by commas. Unlike many languages, Python lets a
# single list hold ints, floats, strings, booleans, None - all mixed together.
list = ["apple", "banana",5, 3.14, True, None] 
print(list) #Print the list

# Lists are mutable
# "Mutable" = changeable. I can replace, add, and remove elements freely.
list[0]="orange" #Change the first element of the list 
# Indexing works like strings (starts at 0), but here assignment is allowed:
# index 0 held "apple", now it holds "orange". The list object is modified.
print(list) #Print the list after changing the first element
list.append("grape") #Add a new element to the end of the list
# append() adds one item to the END. Lists grow dynamically - no need to
# predeclare a size (unlike arrays in many other languages).
print(list) #Print the list after adding a new element  

list2=[1,34,2,54,23,12,45,67,89]
list2.insert(2, 100) #Insert 100 at index 2
# insert(index, value) pushes 100 into position 2; everything after shifts
# one spot to the right (existing elements are NOT overwritten).
print(list2) 

list2.sort() #Sort the list in ascending order
# sort() rearranges the items into ascending order, modifying the list
# in place (it changes the original list itself).
print(list2)
list2.reverse() #Sort the list in descending order
# reverse() flips the current order (it just turns ascending into descending).
print(list2)

list2.pop(4) #Remove the element at index 4 from the list
# pop(index) removes AND returns the element at that index; the list shrinks.
# With no argument, pop() removes the last element.
print(list2)


# TUPLE
print("\nTuple")
t=(1,"2w",3.0,True,None) #Tuple can contain different data types
# A tuple is an ordered, UNchangeable collection written with parentheses ().
# Tuples hold mixed types too, just like lists.
print(type(t)) #Print the type of the tuple
print(t) #Print the tuple

# tuples are immutable
# The key difference: I CANNOT do t[0] = "x". Trying to modify a tuple
# raises a TypeError. Tuples are used when the data must stay fixed, e.g.
# coordinates, days of the week, or function results that shouldn't change.
print(t[0]) #Print the first element of the tuple
print(t[1:3]) #Print the elements from index 1 to 2 of the tuple
# Slicing works on tuples too and returns a new tuple (index 1 and 2, with
# index 3 excluded - just like slicing strings).