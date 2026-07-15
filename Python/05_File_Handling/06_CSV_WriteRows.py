import csv

with open("Python/05_File_Handling/00_Student.csv","w",newline="") as file:
    writer=csv.writer(file)
    rows = [
    ["Rahul",20,85],
    ["Priya",21,92],
    ["Amit",19,78]]   
    writer.writerows(rows)