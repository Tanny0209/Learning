# Purpose: shows how to WRITE to a file using open() in "w" (write) mode.

# open() in "w" (write) mode opens the file for WRITING.
# CAUTION: "w" first TRUNCATES the file, meaning it deletes ALL existing content
# before you write anything new. It also creates the file if it does not exist.
f=open("Python/05_File_Handling/00_Text.txt","w")

# .write() writes a string into the file. It does NOT add any extra characters,
# so we include "\n" ourselves to start on a new line.
# "w" text mode normally ends each line with the platform's line terminator.
f.write("\n This is a sample text file")

# Closing is important for writing: it flushes (saves) any buffered data
# to disk and frees system resources. Forgetting to close can lose data.
f.close()