# CONDITIONALS - my lesson on making decisions in Python with if / elif / else
# A program can only be useful if it can make decisions, and that is what
# conditional statements are for. They let me run different code depending
# on whether a condition (an expression that is True or False) holds.
# The general pattern is: if <condition> : <indented block> [elif ...] [else ...]
# Only ONE branch of an if/elif/else chain ever runs - Python checks them
# from top to bottom and stops at the first condition that is True.
# Indentation (the spaces before the code) is how Python knows which lines
# belong to each branch - 4 spaces is the standard, and it is REQUIRED.

# input() always returns text (a string), so I must wrap it in int() to
# convert the typed answer into a number I can compare with >= and <.
print("\n--- Voting Eligibility ---")
a=int(input("Enter your age: "))

# The "if" block runs ONLY when the condition a>=18 is True (age 18 or more).
if a>=18:
    print("You are eligible to vote.")

# "elif" means "else if". It is only checked when the previous if was False.
# The "or" operator joins two conditions: this branch runs if age is
# negative OR exactly zero, both of which are impossible for a real age.
elif a<0 or a==0:
    print("Invalid age entered.")

# "else" catches every remaining case (here: ages between 1 and 17).
# It has no condition because it is the final fallback option.
else:
    print("You are not eligible to vote.")


# Multiple If-Else Statements

#  this program will print 2 grade if I enter marks which satisfy the both if conditions.
print("\n--- Multiple If-Else Statements ---")
b=int(input("Enter your marks: "))

# NOTE: this "if" block is NOT connected to the if/else below it, because
# it is a completely separate statement. If b>=90 is True, "Grade: A" is
# printed, but execution then continues and the next if/else ALSO runs.
if b>=90:
    print("Grade: A") #this is an independent if statement

# this following if else are connected
# Here the if and else ARE linked, so only one of them can run.
# The "and" operator requires BOTH conditions to be True, so this branch
# needs marks of at least 80 but below 90.
if b>=80 and b<90:
    print("Grade: B")

# This else runs only when b>=80 and b<90 was False (i.e. marks below 80).
# Because the first if (b>=90) is separate, a mark of 95 would print
# both "Grade: A" and then "Grade: C" - that is the bug this example shows.
else:
    print("Grade: C")