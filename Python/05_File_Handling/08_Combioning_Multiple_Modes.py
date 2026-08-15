# Purpose: shows me how to open a file in "r+" mode to BOTH read and write.

# "r+" (read + write) opens an EXISTING file for both reading and writing.
# Unlike "w", it does NOT delete the existing content.
# Unlike "a", the cursor starts at the BEGINNING, so I can read first.
file = open("Python/05_File_Handling/00_Notes.txt", "r+")
# .read() reads the ENTIRE file as a string and stores it in "data".
# After reading, the cursor is now at the END of the file.
data = file.read()
print(data)
# Because the cursor is at the end after the read, this .write() appends
# my new line right after the last line, like "a" mode would.
file.write("\nThis is a new line added to the file.\n")
