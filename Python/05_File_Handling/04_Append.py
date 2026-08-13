# Purpose: shows how to ADD new content to the END of a file with "a" (append) mode.

# "a" (append) mode opens a file and puts the cursor at the END of the file,
# so everything we write is added AFTER the existing content.
# Unlike "w" (write) mode, append does NOT delete the current content.
# "a" also creates the file if it does not exist yet.
with open("Python/05_File_Handling/00_Text.txt","a") as file:
    # .write() adds the string at the end of the file.
    # We start with "\n" so the new text goes on its own line instead of being
    # glued onto the last existing line.
    # .write() RETURNS the number of characters written (that count is stored
    # in the variable "data", but we usually ignore it).
    data = file.write("\nThis is append thing")
    # The "with" block auto-closes the file when the indented block ends.

