# Purpose: shows me how to track where the cursor (file pointer) is in a file.

# Opening with "r" puts the cursor at position 0 (the very start of the file).
print("\n--- Tracking the Cursor with tell() and seek() ---")
with open("Python/05_File_Handling/00_Text.txt", "r") as file:

    # .tell() returns the current cursor position.
    # Expected: 0, because nothing has been read yet.
    print("Cursor position at the start:", file.tell())

    # .read(3) reads the first 3 characters, which moves the cursor forward by 3.
    file.read(3)

    # Expected: 3, since we just read 3 characters.
    print("Cursor position after reading 3 characters:", file.tell())


    # .read(2) reads the next 2 characters, moving the cursor forward by 2 more.
    file.read(2)

    # Expected: 5, because 3 + 2 characters have been read so far.
    print("Cursor position after reading 2 more characters:", file.tell())

    # .seek(0) moves the cursor back to position 0, no matter where it was.
    file.seek(0)

    # Expected: 0, because .seek(0) just moved us back to the start.
    print("Cursor position after seeking back to 0:", file.tell())