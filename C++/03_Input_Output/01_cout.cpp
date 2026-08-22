/*
 * LESSON: cout - the standard OUTPUT stream.
 * cout ("character output") sends data from my program to the console.
 * The << "insertion" operator pushes each value into the stream. Multiple <<
 * operators can be chained in a single line to mix text and variables.
 */

#include <iostream>
using namespace std;

int main(){
 int age =56; // Declare an int variable and initialize it with 56.

 // Chained << operators: first a string, then the variable's value.
 // "\n" is the escape sequence for a NEWLINE (moves to the next line).
 // I note that a variable is NOT wrapped in quotes - quotes mean literal text.
 cout << "\n--- Chained cout Output ---" << endl;
 cout << "Age is " << age << endl;
 return 0;
}


