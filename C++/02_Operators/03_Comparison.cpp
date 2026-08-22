/*
 * LESSON: Comparison (relational) operators.
 * These compare two values and ALWAYS produce a bool result. cout prints a
 * bool as 1 (true) or 0 (false). Comparison operators are the building
 * blocks of if-conditions. I must remember: "==" means EQUAL-TO while "="
 * means ASSIGNMENT - mixing them up is one of the most common beginner bugs.
 */

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    // Comparison operators - each line prints 1 (true) or 0 (false).
    cout << "\n--- Comparison Operators ---" << endl;
    cout << "a == b: " << (a == b) << endl; // == Equal to: 10==20 -> false (0)
    cout << "a != b: " << (a != b) << endl; // != Not equal to: 10!=20 -> 1
    cout << "a < b: " << (a < b) << endl;   // < Less than: 10<20 -> 1
    cout << "a > b: " << (a > b) << endl;   // > Greater than: 10>20 -> 0
    cout << "a <= b: " << (a <= b) << endl; // <= Less than or equal: -> 1
    cout << "a >= b: " << (a >= b) << endl; // >= Greater than or equal: -> 0

    return 0;
}