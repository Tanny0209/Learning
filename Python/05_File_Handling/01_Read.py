text_file=open("Python/05_File_Handling/00_Text.txt","r")
data=text_file.read()
print(data)

# only first 5 char
data5=text_file.read(5)
print(data5)

# Read Only one line
oneline=text_file.readline()
print(oneline)

# Returns List of strings
list=text_file.readlines()
print(list)

text_file.close()