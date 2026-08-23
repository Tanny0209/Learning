/*
 * LESSON: The if statement (condition only, no else yet).
 * if (condition) runs the code inside { } ONLY when the condition is true.
 * The condition is a boolean expression - here a comparison using >=.
 * If the condition is false, the whole block is skipped. This program only
 * shows the "true" path; the next lesson adds the else branch.
 */

#include <iostream>
using namespace std;

int main()
{
   int age; // Declared but not yet initialized - cin will fill it below.
   cout << "\n--- If Statement ---" << endl;
   cout << "Enter Your Age : ";
   cin >> age; // Read the user's age from the keyboard.

   // if statement: the block runs ONLY when the condition evaluates to true.
   if (age>=18) // >= means "greater than or equal to" -> true when 18 or more
   {
     cout << "You are adult" << endl;
   }
    // If age < 18, the block is skipped and the program simply ends.
    // (No else here - nothing happens for minors in this version.)

    return 0;
}