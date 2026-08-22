/*
 * LESSON: Default arguments.
 * I can give a parameter a DEFAULT value in the function definition.
 * If the caller does NOT pass an argument for it, the default is used;
 * if the caller DOES pass one, that value replaces the default.
 * Rules:
 *   - Defaults are written in the declaration/definition with "= value".
 *   - Once a parameter has a default, all parameters AFTER it must
 *     also have defaults (defaults must be trailing).
 *   - The default is decided at compile time, and the function body
 *     never knows whether a default or a real argument was used.
 */

#include <iostream>
using namespace std;

// "Guest" is the default: calling greet() with no argument uses it.
void greet(string name = "Guest")
{
    cout << "Hello " << name << endl;
}

int main()
{
    cout << "\n--- Calling With Default Argument ---" << endl;

    // No argument passed, so name gets the default value "Guest".
    // Prints: Hello Guest
    greet();

    return 0;
}