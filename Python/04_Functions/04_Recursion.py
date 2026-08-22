# RECURSION - my lesson on a function that calls itself
# Instead of loops, a recursive function solves a problem by calling itself
# with a SMALLER version of the same problem. Every recursion needs two parts:
#  1. BASE CASE: a condition that stops the recursion (here n==0). Without
#     it the function would call itself forever and crash the program.
#  2. RECURSIVE CASE: the part where the function calls itself, here with
#     n-1 so the problem shrinks toward the base case.
# Because each call is saved on the call stack, this countdown prints
# "Entering" on the way DOWN (5,4,3,2,1) and then, after the deepest call
# returns, each level resumes and prints "Leaving" on the way UP (1,2,3,4,5).

# Recursion 
print("\n--- Recursion Countdown ---")
def countdown(n):

    if n==0:          # base case - stop recursing at 0
        return        # plain return exits this call without a value

    print("Entering ",n)
    countdown(n-1)    # recursive case - solve the smaller problem first
    print("Leaving ",n)

countdown(5)