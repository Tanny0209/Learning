/*
 * LESSON: The for loop - my first lesson on repeating code.
 * A "for" loop repeats a block of code a fixed number of times.
 * Structure: for ( initialization ; condition ; update ) { body }
 *   1. initialization  -> runs ONCE before the loop starts (creates counter)
 *   2. condition       -> checked BEFORE every iteration; loop stops when false
 *   3. update          -> runs AFTER every iteration (usually changes counter)
 *   4. body            -> the statements that repeat
 */

#include<iostream>
using namespace std;

int main()
{
    // Loop that prints 0,1,2,...,10 on separate lines.
    // i starts at 0, runs while i<=10, and i++ adds 1 after each pass.
    for (int i = 0; i <= 10; i++)
    {
        cout << i<<"\n";
    }

// Star Pattern
    // Nested for loop: a loop INSIDE another loop.
    // Outer loop (s1) controls the NUMBER of rows (5 rows here).
    for (int s1 = 0; s1 < 5; s1++)
    {
        // Inner loop (s2) controls the stars in the CURRENT row.
        // It prints s1+1 stars, so row 0 has 1 star, row 1 has 2, etc.
        for (int s2 = 0; s2 < s1+1; s2++)
        {
            cout<<"*";
        }
        // After each row of stars, move to a new line.
        cout << endl;
    }

    // Factorial: n! = 1*2*3*...*n, e.g. 5! = 120.
    int num;
    cout << "Enter number which you want factorial :- ";
    cin >> num;                    // Read the user's number from keyboard.
    int total =1 ;                 // total holds the running product (start at 1).
    for (int fact = 1; fact <=num; fact++)
    {
        total*=fact;               // total = total * fact (multiply each number in).
    }
    cout<<total<<endl;

    // sum: adds all numbers from 1 to num2 (1+2+3+...+num2).
    // Note: this is nearly identical to factorial, but starts at 0 and ADDS.
    int num2;
    cout << "Enter number which you want Sum:- ";
    cin >> num2;
    int sum =0;                    // sum starts at 0 (adding starts from zero).
    for (int fact = 1; fact <=num2; fact++)
    {
        sum+=fact;                 // sum = sum + fact (accumulate the total).
    }
    cout<<sum<<endl;


    return 0;   // 0 signals to the OS that the program ran successfully.

}