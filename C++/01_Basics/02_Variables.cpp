/*
 * LESSON: Variables and the basic data types.
 * A variable is a named box in memory that stores a value. You must DECLARE
 * a type for it first; the type decides how much memory it uses and what
 * kind of data it can hold. This lesson covers five types:
 *   string - a whole sentence/word (double quotes)
 *   int    - a whole number
 *   double - a number with decimals
 *   char   - one single character (single quotes)
 *   bool   - a logical true/false value
 */

#include <iostream>
using namespace std;

int main() {
    // DECLARATION + INITIALIZATION: choose a type, give a name, and set the
    // starting value in one line. Without initialization a variable would
    // contain random "garbage" from whatever was in memory.
    string name = "John Doe"; // string = a sequence of characters (text),
                              // always written in double quotes "..."
    int age = 25; // int = whole number, no decimals (25, -3, 0, 1024)
    double height = 5.9; // double = number with decimals (floating point)
    char grade = 'A'; // char = exactly ONE character, in SINGLE quotes
    bool isStudent = true; // bool = logical value: only true or false
    


    // OUTPUT: cout prints each piece in order, left to right, chained by <<.
    cout << "Name: " << name << endl; // endl inserts a newline AND flushes
                                      // the output buffer (same effect as \n).
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    // TERNARY operator (condition ? a : b): if isStudent is true it evaluates
    // to "Yes", otherwise to "No". It is a compact if/else that produces a
    // value, perfect for building a string to print.
    cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl;
    return 0;
}

