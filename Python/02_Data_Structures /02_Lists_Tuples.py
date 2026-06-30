# List
print("List")
#List can contain different data types
list = ["apple", "banana",5, 3.14, True, None] 
print(list) #Print the list

# Lists are mutable
list[0]="orange" #Change the first element of the list 
print(list) #Print the list after changing the first element
list.append("grape") #Add a new element to the end of the list
print(list) #Print the list after adding a new element  

list2=[1,34,2,54,23,12,45,67,89]
list2.insert(2, 100) #Insert 100 at index 2
print(list2) 

list2.sort() #Sort the list in ascending order
print(list2)
list2.reverse() #Sort the list in descending order
print(list2)

list2.pop(4) #Remove the element at index 4 from the list
print(list2)


# TUPLE
print("\nTuple")
t=(1,"2w",3.0,True,None) #Tuple can contain different data types
print(type(t)) #Print the type of the tuple
print(t) #Print the tuple

# tuples are immutable
print(t[0]) #Print the first element of the tuple
print(t[1:3]) #Print the elements from index 1 to 2 of the tuple