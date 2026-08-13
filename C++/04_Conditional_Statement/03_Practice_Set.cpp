/*
 * LESSON: Practice - using if/else to test odd or even numbers.
 * It combines the modulus operator % (remainder), the == comparison, user
 * input with cin, and the if/else branches from the previous lessons.
 * The trick: dividing by 2, an even number leaves remainder 0, an odd number
 * leaves remainder 1. So num % 2 == 0 is true exactly for even numbers.
 */

#include <iostream>
using namespace std;

int main()
{
    int num; // The number to test, filled by cin below.
    cout << "Enter number to check odd or even : ";
    cin >>num; // Store whatever integer the user types.

    // num % 2 = the remainder when num is divided by 2 (0 for even, 1 for odd).
    // == 0 compares that remainder to zero -> true means the number is EVEN.
    if(num%2==0)
    {
        cout << num <<" is even \n";
    }

    // else catches every remaining case: the remainder was NOT 0, so the
    // number must be odd. No condition is needed here - if the if was false,
    // this is the only other possibility.
    else
    {
        cout << num << " is odd\n";
    }

    return 0;
}