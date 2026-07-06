#This is default args provided 

def greet(name="Guest"): 
    print("Good Morning",name)


greet()
greet("Tanmay")


# Positional Arguments
def student(name,age):
    print(f"Student name is {name} and age is {age}")

student("Tanmay",22)
student(20,"Tanmay")

# Keyword Argument 
student(age=22,name="Tanmay")


# *args 
def add(*numbers):
    total=0

    for i in numbers:
        total+=i
    print(f"Addition is :- {total}")

add(5,10,15)


# Kwargs
def det(**kwargs):
    print(kwargs)


det(name="Tanmay",age=22)