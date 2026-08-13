/*
 * LESSON: Arithmetic operators: + - * / and %.
 * They do basic math, but watch out for INTEGER DIVISION: when both operands
 * of / are integers, C++ chops off the decimal part (no rounding!). The
 * modulus operator % gives the REMAINDER of a division instead of the
 * quotient. This lesson shows both the pitfall and the fix.
 */

#include <iostream>
using namespace std;

int main() {
    int a = 10,b = 3; // Two integers declared on one line. Since 10 / 3 is
                      // not a whole number, this choice causes a surprise
                      // in the division example below.

    // Addition: 10 + 3 = 13
    int sum = a + b;
    cout << "Sum: " << sum << endl;

    // Subtraction: 10 - 3 = 7
    int difference = a - b;
    cout << "Difference: " << difference << endl;

    // Multiplication: 10 * 3 = 30
    int product = a * b;
    cout << "Product: " << product << endl;

    // INTEGER division: 10 / 3 = 3 because both a and b are ints. The
    // fractional part (.33) is simply TRUNCATED (cut off), even though the
    // answer is stored in a double - the damage already happened in /.
    double quotient = a / b; // Wrong result: division is done in int first.
    cout << "Quotient: " << quotient << endl;
    // FIX: make at least one operand a double (here 10.0). Then C++ performs
    // floating-point division and keeps the decimals: 10.0 / 3 = 3.33333.
    cout<< "Quotient : "<<10.0/3<<endl;
    
    // Modulus: gives the REMAINDER of integer division, 10 % 3 = 1.
    // (% only works on integers, not on doubles.)
    int remainder = a % b;
    cout << "Remainder: " << remainder << endl;

    return 0;
}