# Purpose: shows me how to WRITE a CSV file row by row with csv.writer.
# This version writes the header first, then one line of data per writerow call.

import csv

# Open the file in "w" (write) mode, which creates the file and wipes any old
# content. newline="" tells Python NOT to add extra line endings of its own;
# the csv module manages line endings itself, so newline="" avoids blank rows.
with open("Python/05_File_Handling/00_Student.csv", "w", newline="") as file:

    # csv.writer wraps the file and gives me helper methods to write CSV data.
    # It handles placing commas between fields and the "\n" at the end of row.
    writer = csv.writer(file)

    # writerow() writes ONE row (a single line). The list becomes the columns.
    # A header row is just a normal row, so I write it first.
    writer.writerow(["Name", "Age", "Marks"])

    # Each of these adds one more line of data to the CSV file.
    # csv.writer converts non-string values (like the numbers 20, 85) to text
    # automatically when it writes them.
    writer.writerow(["Rahul", 20, 85])

    writer.writerow(["Priya", 21, 92])

    writer.writerow(["Amit",19,77])
    # The "with" block auto-closes the file, which flushes all rows to disk.

