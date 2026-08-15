# Purpose: shows me how to use "x" (exclusive creation) mode.

# "x" (exclusive) mode is used for CREATING a file, just like "w",
# but with one important difference: it FAILS if the file already exists.
# This protects me from accidentally overwriting an existing file.
file = open("Python/05_File_Handling/00_Exclusive.txt", "x")
# .write() puts the string into the file. Since this is a brand-new file
# created by "x", I know nothing was there before, so "Hello" is the whole file.
file.write("Hello")
# Closing is important: it flushes (saves) the buffered data to disk.
file.close()
