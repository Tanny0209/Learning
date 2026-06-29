# This is a simple Python script that uses the `pyjokes` library to fetch and print a random joke.

import pyjokes

joke=pyjokes.get_joke()
print(joke)