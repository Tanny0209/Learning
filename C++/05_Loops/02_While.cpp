/*
 * LESSON: The while loop - my second lesson on loops.
 * A "while" loop repeats as long as its condition stays TRUE.
 * Structure: while ( condition ) { body }
 *   - The condition is checked BEFORE each iteration (so it may run 0 times).
 *   - This is ideal when I do NOT know in advance how many times
 *     the loop must run (unlike a for loop).
 *   - I must update the condition's variable INSIDE the body,
 *     otherwise the loop never ends (infinite loop)!
 */

#include<iostream>
using namespace std;

int main ()
{
    int i = 1;      // Initialize the counter BEFORE the loop.

    // Check condition first: is i <= 5? If yes, run the body.
    while(i <= 5)
    {
        cout << i << endl;
        i++;        // CRITICAL: increase i so the loop eventually stops.
    }
    // When i becomes 6, the condition i<=5 is false and the loop exits.
    // A while loop is equivalent to a for loop when the for loop's
    // initialization is written before it and its update inside the body.
}