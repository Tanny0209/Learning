/*
 * LESSON: This is my very first C++ program - the classic "Hello, World!".
 * It shows me the four essential pieces of every C++ program:
 *   1. A preprocessor directive (#include) to pull in library code.
 *   2. A namespace declaration so I can use standard names simply.
 *   3. The main() function, where execution always begins.
 *   4. Using cout to send text to the screen, then returning an exit code.
 */

#include<iostream>  // Preprocessor directive: BEFORE compilation this line
                    // copies the <iostream> header into the source file.
                    // That header defines cout, cin, endl and the rest of
                    // the standard input/output tools.
using namespace std; // "std" is the namespace that holds the C++ standard
                     // library. This line lets me write "cout" instead of
                     // "std::cout". Real projects often skip this line to
                     // avoid name collisions between libraries.

int main() { // Entry point: every C++ program must have exactly ONE main().
             // The operating system starts running my program here. Code
             // inside the { } braces executes top to bottom.
    // cout is the standard OUTPUT stream ("character output"). The << is the
    // "insertion" operator: it pushes the string into the stream so that it
    // gets printed to the console.
    cout << "Hello , World !" << endl;
    return 0; // Sends exit code 0 back to the operating system, meaning
              // "finished successfully". A nonzero code signals an error.
};
