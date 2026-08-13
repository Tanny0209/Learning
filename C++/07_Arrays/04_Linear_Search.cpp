/*
    PURPOSE: Linear search - the simplest search algorithm. We look for a
    target value by checking every element one by one until we find it.
*/

#include <iostream>
using namespace std;

int main()
{
    int marks[5]={87,95,77,68,88};
    // "target" is the value we want to locate inside the array.
    int target=77;

    /* LINEAR SEARCH ALGORITHM:
       Step 1 - start at index 0.
       Step 2 - compare marks[i] with the target.
       Step 3 - if equal, we found it; report the index and stop.
       Step 4 - otherwise move to the next index and repeat.

       WHY does this work? Because we examine EVERY position from 0 to 4,
       no element can escape our check. The order does not matter.

       "break" exits the loop immediately after finding the match. Without
       it, the loop would keep going and print the same index over and over
       (and, in real code, waste time scanning the rest).

       EDGE CASES:
       - If the target appears multiple times, only the FIRST match is printed
         because of "break".
       - If the target is NOT in the array, the loop simply ends and nothing
         is printed - there is no "not found" message here (an improvement
         would be a found/not-found flag). */
    for (int i = 0; i < 5; i++)
    {
        if (marks[i]==target)
        {
            cout<<"Number found at index "<<i<<endl;
            break;
        }
    }
}