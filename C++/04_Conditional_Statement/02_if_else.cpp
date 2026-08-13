/*
 * LESSON: if-else - handling BOTH outcomes of a condition.
 * if runs its block when the condition is true; else runs its block when the
 * condition is false. Exactly ONE of the two branches executes - never both,
 * never none. This gives a guaranteed answer for every possible input.
 */

#include <iostream>
using namespace std;

int main()
{
    int age; // Uninitialized until cin stores the user's input below.
    
    cout<<"Enter your age : ";
    cin >>age;

    // Exactly one branch runs, depending on what the user typed.
    if (age >= 18) // The condition: age is 18 or older
    {
        cout << "You are adult\n"; // This runs ONLY when the condition is TRUE
    }
    else{ // else has no condition: it catches every FALSE case automatically
        cout << "You are minor\n" ;
    }

    return 0;
}
