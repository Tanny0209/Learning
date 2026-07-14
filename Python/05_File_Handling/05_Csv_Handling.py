import csv

file = open("Python/05_File_Handling/00_Student.csv", "r")

reader = csv.reader(file)

for row in reader:
    print(row)

file.close()