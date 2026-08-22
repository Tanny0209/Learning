# LOOPS - my lesson on doing the same thing many times without repeating code
# Loops let one small piece of code run over and over. This file explores
# the for loop, the while loop, the break/continue/pass statements, nested
# loops (a loop inside another loop), and a few classic loop exercises.

# For loop is an iteration statement that is used to iterate over a sequence.
# A for loop walks through a "sequence" (like the numbers made by range())
# one item at a time. range(1, 11) makes 1,2,3,...,10 - the STOP value 11 is
# exclusive (never included). Each round, the variable i holds the next value.
print("\n--- Using For Loop ---")
for i in range(1, 11):
    print("Number:", i)


# While loop is used to execute a block of code repeatedly as long as a given condition is true.
# Unlike for, a while loop has no built-in counter: it keeps going as long as
# its condition stays True. I must change something inside the loop (here
# i += 1, which is shorthand for i = i + 1) so the condition eventually
# becomes False - otherwise the loop would run forever!
print("\n--- Using While Loop ---")
i=1
while i <= 10:
    print("Number:", i)
    i += 1

# Break
# "break" instantly stops the entire loop, skipping whatever is left.
# Here the loop starts at 1, but when i becomes 5 I bail out, so only
# 1,2,3,4 are printed. Useful to stop early when I found what I wanted.
print("\n--- Using Break Statement ---")
for i in range(1,11):
    if i ==5:
        break
    print("Number:", i)


# Continue
# "continue" skips only the CURRENT round and jumps straight to the next one.
# Here i is incremented first, so when i==5 I skip the print for 5 but the
# loop carries on normally with 6,7,8,9,10,11.
print("\n--- Using Continue Statement ---")
i = 0
while i <= 10:
    i += 1
    if i == 5:
        continue
    print("Number:", i)


# Pass
# "pass" does absolutely nothing - it is an empty placeholder. It is needed
# because Python blocks cannot be completely empty. Here the if branch does
# nothing, so i==5 is skipped; the else prints every other number.
print("\n--- Using Pass Statement ---")
for i in range(1, 11):
    if i == 5:
        pass
    else:
        print("Number:", i)


# Nested loops
# A loop inside another loop. For EVERY value of the outer i, the inner loop
# runs its FULL course. This prints every (i, j) combination from (1,1) to
# (5,5) - 25 lines in total.
print("\n--- Nested Loops ---")
for i in range(1,6):
    for j in range(1,6):
        print("Pair:", i, j)

# Printing a rectangle of stars: the outer loop makes the rows, the inner
# loop makes the columns of one row.
print("\n--- Rectangle Of Stars ---")
for i in range(3): #first loop stand for rows
    for j in range(4): #second loop stand for columns
        print("*", end=" ")
    print()  #output will be 3 rows and 4 columns of stars

# Star pattern (a triangle growing one star per row).
# The outer loop picks the row number i; the inner loop prints i+1 stars,
# so row 0 prints 1 star, row 1 prints 2 stars, ... row 4 prints 5 stars.
print("\n--- Star Pattern ---")
for i in range (5):
    for j in range(i+1):
        print("*",end="")
    print()

# Inverted Star pattern
# range(5,0,-1) counts DOWN from 5 to 1 (the -1 step means subtract 1 each
# time). So the first row has 5 stars, then 4, 3, 2, 1.
print("\n--- Inverted Star Pattern ---")
for i in range(5,0,-1):
    for j in range(i):
        print("*",end="")
    print()



# Sum Of 1 to 100 numbers   
# Classic accumulator pattern: start with 0 and keep adding every number.
# sum += i is shorthand for sum = sum + i. After the loop sum = 1+2+...+100.
print("\n--- Sum Of 1 To 100 Numbers ---")
sum=0
for i in range(1, 101):
    sum+=i

print("\nSum of 1 to 100 is:", sum)

# How many even nubers are there from 1 to 100
# The % (modulo) operator gives the remainder of a division. A number is even
# when it divides by 2 with remainder 0 (i%2==0). count += 1 is a counter.
print("\n--- Count Of Even Numbers From 1 To 100 ---")
count=0
for i in range(1,101):
    if i%2==0:
        count+=1

print("\nCount of even numbers from 1 to 100 is:", count)


# Find maximum number from a list
# "Linear search" for a maximum: assume the first element is the biggest,
# then walk through the list replacing max_num whenever I find something larger.
print("\n--- Find Maximum Number From A List ---")
numbers = [10, 20, 30, 410, 50]
max_num = numbers[0]

for num in numbers:
    if num>max_num:
        max_num = num   

print("\nMaximum number from the list is:", max_num)


# Factorial
# Factorial of n (written n!) is n * (n-1) * ... * 2 * 1. I start the
# accumulator at 1 (starting at 0 would make everything 0!) and multiply
# by every integer from 1 up to num.
print("\n--- Factorial ---")
num=int(input("Enter a number to find factorial: "))
factorial=1
for i in range (1,num+1):
    factorial*=i

print(f"Factorial of {num} is: {factorial}")