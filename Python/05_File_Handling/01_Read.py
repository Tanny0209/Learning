# Purpose: my first lesson on files - shows the four main ways to read a file
# in Python (read all, read a fixed number of characters, read one line, read
# all lines as a list).
# The same text file is used throughout, so I pay attention to the position
# (cursor) of the file object, which moves forward as I read.

# open() opens the file and returns a "file object" I can read from.
# The second argument "r" is the MODE: "r" stands for READ.
# "r" is actually the default mode, but writing it makes the intention clear.
text_file=open("Python/05_File_Handling/00_Text.txt","r")

# .read() with no argument reads the ENTIRE file as one big string,
# including all the newline characters "\n" that separate the lines.
print("\n--- Reading the Entire File ---")
data=text_file.read()
print("Entire file content:", data)

# IMPORTANT: reading moves an internal cursor (a "read position") forward,
# so after the full .read() above the cursor is already at the END of the file.
# Everything after this reads nothing unless I re-open the file.
# .read(5) means "read only the next 5 characters" (here: nothing is left).
print("\n--- Reading a Fixed Number of Characters ---")
data5=text_file.read(5)
print("Next 5 characters:", data5)

# .readline() reads only the next LINE, stopping at (and including) the "\n".
# It returns a string. It also respects the same cursor position as above.
print("\n--- Reading One Line ---")
oneline=text_file.readline()
print("One line:", oneline)

# .readlines() reads ALL remaining lines and returns them as a LIST of strings,
# where each element is one line (including its trailing "\n").
print("\n--- Reading All Lines as a List ---")
list=text_file.readlines()
print("Remaining lines as a list:", list)

# Always close the file when I am done with it.
# Closing frees up the system resources the file was holding.
# (Later lessons show the better alternative: the "with" statement.)
text_file.close()