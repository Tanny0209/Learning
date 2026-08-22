# LAMBDA - my lesson on anonymous (nameless) one-line functions
# A lambda is a tiny function without a "def" and without a name, written in
# a single expression. The syntax is: lambda <inputs> : <expression returned>.
# Here "x" is the input and x*x is what gets returned automatically - no
# explicit "return" keyword is used.
# This lambda is exactly equivalent to:
#     def square(x):
#         return x * x
# Lambdas are handy when I need a quick throwaway function, especially for
# passing into other functions (like sort, filter, map).

# Lambda 
print("\n--- Lambda Function ---")
square = lambda x: x*x

print("Square of 5:", square(5))