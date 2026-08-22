/*
 * LESSON: Variable scope.
 * Scope = the region of a program where a variable can be used. A variable
 * declared inside { } braces is "local" to that block: it is created at its
 * declaration line and destroyed at the closing brace. Outside the braces it
 * does not exist. This lesson contrasts a block-local variable with a
 * variable declared directly inside main(), which lives to the end of main().
 */

#include <iostream>
using namespace std;

int main() {
    // Scope of variables

    // A variable declared INSIDE { } only exists within that block of code.
    cout << "\n--- Local Scope Example ---" << endl;
    {
        int localVariable = 10; // LOCAL variable: born here, destroyed at the
                                // closing brace two lines below.
        cout << "Local Variable: " << localVariable << endl;
        // This closing brace ends the block, so localVariable no longer
        // exists. Using it after this point would be a compile error.
    }

    // This variable is declared in main(), outside any inner block, so it is
    // visible everywhere inside main() until the function's closing brace.
    cout << "\n--- Global Scope Example ---" << endl;
    int globalVariable = 20; // Function-local to main(): "global" only from
                             // main()'s point of view. A TRULY global
                             // variable would be declared ABOVE main(),
                             // outside every function, and would be visible
                             // to the whole file.
    cout << "Global Variable: " << globalVariable << endl;

    return 0;
}