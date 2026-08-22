/*
 * LESSON: Inline functions.
 * Normally, every function CALL has a small cost: the program must jump
 * to the function's code, set up the call, and jump back. For tiny
 * functions called very often, this overhead can add up.
 *
 * The "inline" keyword is a HINT to the compiler: "try to insert this
 * function's body directly at each call site" instead of performing a
 * real function call. Conceptually square(5) becomes 5*5 wherever it
 * appears. This can make small functions faster, at the cost of a
 * larger compiled program (the body is duplicated).
 *
 * NOTE: inline is only a suggestion - the compiler may ignore it for
 * large or recursive functions. Since C++17, a single-line inline
 * function body (like this one) is not required, but it is still a
 * useful teaching example of the concept.
 */

#include <iostream>
using namespace std;

// inline function: one line, returns x squared.
inline int square(int x){return x * x;}

int main()
{
    cout << "\n--- Inline Function Call ---" << endl;

    // With inlining, this effectively becomes: cout << (5 * 5) << endl;
    cout << "Square of 5: " << square(5) << endl;

    return 0;
}