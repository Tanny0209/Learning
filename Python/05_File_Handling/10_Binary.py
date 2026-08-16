# Binary File Handling in Python
# Binary files store data as bytes (not text), useful for images, audio, executables, etc.

# --- 1. Writing and Reading Binary Data ---

data = b"Hello"  # b prefix creates a bytes object (raw binary data)

# "wb" = write binary mode (creates/overwrites file)
with open("Python/05_File_Handling/00_Binary.bin", "wb") as file:
    file.write(data)

# "rb" = read binary mode
with open("Python/05_File_Handling/00_Binary.bin", "rb") as file2:
    print(file2.read())  # reads entire file as bytes

# --- 2. Copying a Binary File (Image) ---

# Read the entire PNG image as raw bytes
with open("Python/05_File_Handling/00.png", "rb") as source:
    da = source.read()

# Write those bytes to a new file (creates a copy)
with open("Python/05_File_Handling/2.png", "wb") as dest:
    dest.write(da)

# --- 3. Appending Binary Data ---

# bytearray is like bytes but mutable (can be modified)
dataarray = bytearray(b"\nABC")
# "ab" = append binary mode (adds to end of file without erasing)
with open("Python/05_File_Handling/00_Binary.bin", "ab") as file3:
    file3.write(dataarray)
