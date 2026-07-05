def square(a):
    return f"Square of {a} is {a*a}"

def greet(name):
    return f"Good Morning {name}"


name=input("Enter your Name : ")
g=greet(name)
print(g)

a=int(input("Enter number which you want square : "))
s=square(a)
print(s)