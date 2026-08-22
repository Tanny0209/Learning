/*
 * LESSON: Putting loops to work (my practice set).
 * I combined for loops with if statements and the modulus operator (%)
 * to solve two real problems: printing a multiplication table and
 * summing only the even numbers from 0 to 100.
 */

#include <iostream>
using namespace std;

int main()
{
    cout << "\n--- Multiplication Table ---" << endl;

    // Problem 1: print the multiplication table of a user-chosen number.
    int mul;
    cout << "Enter number which you want table : ";
    cin >> mul;                  // Get which table to print.

    // Loop i from 1 to 10 and print "mul * i = result" each time.
    for (int i = 1; i <= 10; i++)
    {
        cout << mul << " * " << i << " = " << mul*i << "\n";
    }


    cout << "\n--- Even Number Sum ---" << endl;

    // Problem 2: add up every EVEN number from 0 to 100.
    int sum=0;                  // Accumulator: starts at 0.
    // Even number sum
    for (int i = 0; i <= 100; i++)   // Walk through every number 0..100.
    {
        // % is the modulus operator: i%2 is the remainder of i/2.
        // If the remainder is 0, the number divides evenly by 2 -> even.
        if (i%2==0)
        {
            sum+=i;             // Add the even number to the running total.
        }

    }
    cout << "Even Number Sum (0 to 100): " << sum << endl;         // Print 0+2+4+...+100 = 2550.

    return 0;
}