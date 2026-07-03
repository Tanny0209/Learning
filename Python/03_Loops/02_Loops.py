# Loops in Python

# For loop is an iteration statement that is used to iterate over a sequence.
print("Using for loop:")
for i in range(1, 11):
    print(i)


# While loop is used to execute a block of code repeatedly as long as a given condition is true.

print("\nUsing while loop:")
i=1
while i <= 10:
    print(i)
    i += 1

# Break
print("\nUsing break statement:")
for i in range(1,11):
    if i ==5:
        break
    print(i)


# Continue
print("\nUsing continue statement:")
i = 0
while i <= 10:
    i += 1
    if i == 5:
        continue
    print(i)


# Pass
print("\nUsing pass statement:")
for i in range(1, 11):
    if i == 5:
        pass
    else:
        print(i)


# Nested loops
for i in range(1,6):
    for j in range(1,6):
        print(i, j)

print("\n")

for i in range(3): #first loop stand for rows
    for j in range(4): #second loop stand for columns
        print("*", end=" ")
    print()  #output will be 3 rows and 4 columns of stars

print("\n")

# Star pattern
for i in range (5):
    for j in range(i+1):
        print("*",end="")
    print()

print("\n\n")

# Inverted Star pattern
print("Inverted Star pattern")
for i in range(5,0,-1):
    for j in range(i):
        print("*",end="")
    print()



# Sum Of 1 to 100 numbers   
sum=0
for i in range(1, 101):
    sum+=i

print("\nSum of 1 to 100 is:", sum)

# How many even nubers are there from 1 to 100
count=0
for i in range(1,101):
    if i%2==0:
        count+=1

print("\nCount of even numbers from 1 to 100 is:", count)


# Find maximum number from a list
numbers = [10, 20, 30, 410, 50]
max_num = numbers[0]

for num in numbers:
    if num>max_num:
        max_num = num   

print("\nMaximum number from the list is:", max_num)


