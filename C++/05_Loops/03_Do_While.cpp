/*
 * LESSON: The do-while loop - my third lesson on loops.
 * Structure: do { body } while ( condition );
 *   - The body runs FIRST, and ONLY AFTER that is the condition checked.
 *   - Guarantees the body executes AT LEAST ONCE, even if the
 *     condition is false from the start.
 *   - A while loop checks BEFORE running (0+ times); a do-while loop
 *     checks AFTER running (1+ times). This is the ONLY difference.
 *   - I noted the semicolon (;) after the while(...) - it is required here,
 *     unlike an ordinary while loop.
 */

#include<iostream>
using namespace std;

int main()
{
    int i = 1;      // Initialize the counter.

    cout << "\n--- Do While Loop Counting ---" << endl;

    // Run the body first, THEN ask: is i <= 5? If yes, run again.
do
{
    cout << "Count: " << i << endl;
    i++;            // Update the counter so the loop can eventually stop.
}
while(i <= 5);
    // Here the loop stops once i becomes 6.
    // I would use a do-while when I need the body to run at least once,
    // e.g. showing a menu before asking the user whether to continue.

    return 0;
}