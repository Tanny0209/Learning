/*
 * LESSON: Assignment and compound assignment operators.
 * "=" STORES a value into a variable - it does NOT mean "equals" like in
 * math. A compound assignment such as a += 10 is a shortcut for a = a + 10:
 * it reads the current value, applies the operation, and stores it back.
 * There are five of them: =, +=, -=, *=, /=.
 */

#include <iostream>
using namespace std;

int main() {
    // Declares three ints: a = 10, c = 60, and b which is UNINITIALIZED
    // (it holds whatever garbage was in memory until we assign it below).
    int a=10,b,c=60;

    // "=" copies the VALUE of a (10) into b. a itself is not changed.
    b=a; // Assignment operator
    a=60; // Overwrite a's previous value (10) with 60.
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;

    a+=10; // Shortcut for a = a + 10. a was 60, now becomes 70.
    cout<<"Value of a after a+=10: "<<a<<endl;

    b-=5; // Shortcut for b = b - 5. b was 10, now becomes 5.
    cout<<"Value of b after b-=5: "<<b<<endl;

    a*=2; // Shortcut for a = a * 2. a was 70, now becomes 140.
    cout<<"Value of a after a*=2: "<<a<<endl;

    c/=15; // Shortcut for c = c / 15. c was 60, now becomes 4 (60/15 is an
           // exact integer division, so no truncation issue here).
    cout << "Value of c after c/=15: " << c << endl;

    return 0;
    
}