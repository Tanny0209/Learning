# Purpose: introduces the "with" statement (context manager), the BEST and
# recommended way to open files, and why it beats manually calling .close().

# "with ... as ..." is a CONTEXT MANAGER. It guarantees the file is closed
# automatically, no matter what happens inside the indented block.
#   - Even if an exception (error) occurs inside the block, the file still gets
#     closed, because closing happens when the block finishes either way.
#   - I can NOT forget to close it, so resources are always freed and written
#     data is always flushed to disk.
# The object returned by open() is assigned to the name "file" via "as".
print("\n--- Reading a File with 'with open' ---")
with open ("Python/05_File_Handling/00_Text.txt","r") as file :
    # Everything indented under "with" is inside the block where "file" is open.
    # "r" mode means read: I read the whole file into the string "data".
    data = file.read()
    # After this block, the file is automatically closed for me.

# I am now OUTSIDE the "with" block. The file is already closed,
# but the data I read is still safe in the "data" variable.
print("File content read with 'with':", data)