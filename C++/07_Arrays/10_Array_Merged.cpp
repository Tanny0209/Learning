/*
    PURPOSE: My lesson on merging (combining) two arrays into one bigger array,
    element by element, in order.
*/

#include<iostream>
using namespace std;

int main()
{
    int first[3]={1,2,3};
    int second[3]={4,5,6};
    /* The merged array must be big enough for BOTH inputs: 3 + 3 = 6.
       CRITICAL: if I declared merged[5], writing merged[5] later would be
       out of bounds (undefined behavior) - the size must equal first+second. */
    int merged[6];

    // "index" tracks where the NEXT element goes in the merged array.
    int index=0;

    /* Copy all of "first" into the start of "merged".
       After each copy, index advances so the next element lands in the next
       free slot. The outer "i" and the running "index" are separate counters:
       i moves through the source array, index through the destination. */
    for (int i = 0; i < 3; i++)
    {
        merged[index]=first[i];
        index++;
    }

    /* Continue from where I stopped: index is now 3, so "second" is appended
       right after "first" instead of overwriting it. This is why index is NOT
       reset to 0 between the two loops. */
    for (int i = 0; i < 3; i++)
    {
        merged[index]=second[i];
        index++;
    }

    // Traverse the finished merged array to show the result: 1 2 3 4 5 6.
    for (int i = 0; i < 6; i++)
    {
        cout<<merged[i]<<endl;
    }
    
    return 0;
}