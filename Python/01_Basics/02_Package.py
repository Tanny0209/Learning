# LESSON: My first lesson on importing packages/modules (third-party libraries)
# Purpose: Shows how I can use code written by others. I don't have to build
# everything myself - Python lets me "import" ready-made libraries.

# What is a library/package/module? A collection of pre-written code
# (functions, classes, etc.) that solves common problems, so I can reuse it.

# pyjokes is a THIRD-PARTY library (made by the community, not built into
# Python). Because of that, it must be installed first with:
#     pip install pyjokes
# The "import" statement below loads it into this program, making its
# functions available under the name "pyjokes".
import pyjokes

# Calling a function from the library:
#   pyjokes.get_joke() -> "pyjokes" is the library name,
#   "." separates the library from its function, and "get_joke()" runs it.
# The returned joke (a string) is stored in the variable "joke".
joke=pyjokes.get_joke()
# print() displays whatever the joke variable holds on the screen.
print(joke)