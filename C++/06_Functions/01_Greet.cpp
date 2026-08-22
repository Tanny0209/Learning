/*
 * LESSON: Functions - my first lesson on declaring, defining, and calling.
 * A function is a named block of reusable code. Instead of rewriting
 * the same code, I DEFINE it once and CALL it whenever I need it.
 * Anatomy of a definition:
 *   return_type function_name( parameters ) { body }
 *   - return_type: what the function gives back ("void" = nothing).
 *   - parameters:   the inputs the function needs (here: none).
 * main() is special: the program ALWAYS starts executing at main(),
 * and every other function only runs when it is explicitly called.
 */

#include <iostream>
using namespace std;

// DEFINITION of welcome(): no parameters, returns nothing (void).
void welcome()
{
    cout << "Good Morning\n";
}

int main()
{
    cout << "\n--- Calling A Function ---" << endl;

    // CALL (or invocation): jumps into welcome(), runs its body,
    // then returns to this line and continues. main() does this FIRST,
    // even though welcome() is defined above it in the file.
    welcome();
    return 0;
}