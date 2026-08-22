/*
    PURPOSE: My lesson on counting frequency (how many times a value appears)
    in an array. This is linear search combined with a counter variable.
*/

#include<iostream>
using namespace std;

int main()
{
    int numbers[8]={5,2,12,7,5,69,2,5};

    // The value whose occurrences I want to count.
    int target=5;
    // "counter" accumulates the number of matches. Must start at 0.
    int counter=0;

    /* ALGORITHM:
       Walk through every element (i = 0..7). Each time numbers[i] equals the
       target, increment counter by one (counter++).

       NOTE: this time I do NOT break after a match. Linear search stops at
       the first match; frequency counting must keep going to see all matches.

       In this array, 5 appears at indices 0, 4 and 7 -> counter becomes 3.
       If the target were absent, counter would stay 0 (also a valid result). */
    for (int i = 0; i < 8; i++)
    {
        if (numbers[i]==target)
        {
            counter++;
        }
        
    }
    cout << "\n--- Counting Frequency ---" << endl;
    cout << target << " is repeated " << counter << " times" << endl;

    return 0;
}