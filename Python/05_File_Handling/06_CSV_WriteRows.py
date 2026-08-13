# Purpose: shows a cleaner way to write CSV data — prepare ALL rows first in a
# list of lists, then write them all at once with writerows().

import csv

# Same setup as the previous lesson: write mode + newline="" to avoid blank rows.
with open("Python/05_File_Handling/00_Student.csv","w",newline="") as file:
    writer=csv.writer(file)

    # Build the data as a LIST OF LISTS first. The outer list holds rows,
    # and each inner list holds the columns/cells of one row.
    rows = [
    ["Rahul",20,85],   # row 1
    ["Priya",21,92],   # row 2
    ["Amit",19,78]]    # row 3

    # writerows() (plural) writes ALL rows in one go, looping internally.
    # It does the same work as calling writerow() once per row, but keeps the
    # data separate from the writing step, which is easier to read and reuse.
    writer.writerows(rows)
    # Notice: this version has NO header row, unlike 06_CSV_Write.py,
    # so the CSV starts directly with data. Header rows are optional.