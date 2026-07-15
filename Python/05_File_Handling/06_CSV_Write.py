import csv

with open("Python/05_File_Handling/00_Student.csv", "w", newline="") as file:

    writer = csv.writer(file)

    writer.writerow(["Name", "Age", "Marks"])

    writer.writerow(["Rahul", 20, 85])

    writer.writerow(["Priya", 21, 92])

    writer.writerow(["Amit",19,77])

