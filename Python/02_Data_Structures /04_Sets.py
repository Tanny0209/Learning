s={1,2,3,4,5} # this is a set
print(s, type(s))

b={} # this will create an empty dictionary, not a set
e=set() # this is an empty set
print(b, type(b))   
print(e, type(e))

# Set Methods
s.add(6) # add an element to the set
print(s)

s1={1,5,18,4}
s2={23,1,45,7}

print(s1.union(s2)) # union of two sets
print(s1.intersection(s2)) # intersection of two sets   
