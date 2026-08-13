# Purpose: shows how to READ a CSV file using the built-in csv module.
# CSV (Comma-Separated Values) is a common format where each line is a record
# and the fields within a line are separated by commas.

# The csv module is part of Python's standard library, so no extra install is
# needed. "import csv" makes all its helpers (like csv.reader) available.
import csv

# Open the CSV file in "r" (read) mode like any normal text file.
# A CSV file is just text, so all the file-handling rules you already know apply.
file = open("Python/05_File_Handling/00_Student.csv", "r")

# csv.reader(file) wraps the file and splits each line of text into a LIST
# of fields. The comma (or whatever the delimiter is) becomes the split point,
# and each list element is one cell from the original CSV line.
reader = csv.reader(file)

# The reader is ITERABLE, meaning we can loop over it. Each iteration
# yields one row of the CSV as a list of strings, e.g. ['Rahul', '20', '85'].
# (Notice everything comes back as strings — even numbers — so CSV data often
# needs converting to int/float before doing math on it.)
for row in reader:
    print(row)

# Close the file manually. (In the next lessons we'll see "with",
# which closes the file automatically for us.)
file.close()