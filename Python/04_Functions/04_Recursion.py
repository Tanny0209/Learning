# Recursion 
def countdown(n):

    if n==0:
        return
    
    print("Entering ",n)
    countdown(n-1)
    print("Leaving ",n)

countdown(5)