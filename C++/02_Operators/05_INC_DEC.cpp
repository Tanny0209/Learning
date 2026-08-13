/*
 * LESSON: Increment (++) and decrement (--) operators.
 * ++ adds 1 to a variable and -- subtracts 1, but WHERE the operator sits
 * decides the ORDER of two steps:
 *   Pre-increment  (++x): add 1 FIRST, then use the NEW value.
 *   Post-increment (x++): use the OLD value first, THEN add 1.
 * Same idea applies to decrement (--x and x--).
 */

// ++x and x++ are both increment operators in C++. The difference between them lies in when the increment operation takes place.

#include <iostream> 
using namespace std;

int main() {
    int x = 5;
    cout << "Initial value of x: " << x << endl;

    // PRE-increment: x is incremented to 6 FIRST, then that new value (6)
    // is what gets printed. The ++ is to the LEFT of the variable.
    cout << "Value of x after pre-increment (++x): " << ++x << endl;
    // POST-increment: the CURRENT value (6) is printed first, and only
    // afterwards does x become 7. The ++ is to the RIGHT of the variable.
    // So this line prints 6 but silently leaves x = 7.
    cout << "Value of x after post-increment (x++): " << x++ << endl;
    // The x++ above already finished, so x now holds 7 - this line simply
    // confirms the value left behind by the post-increment.
    cout << "Value of x after post-increment (x++): " << x << endl;
    return 0;
}   