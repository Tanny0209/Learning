/*
    PURPOSE: My lesson on detecting duplicates - comparing every pair of
    elements with a NESTED loop, so each element is compared with every later
    element.
*/

#include <iostream>
using namespace std;

int main()
{
    int numbers[6] = {5, 3, 2, 7, 5, 9};

    /* ALGORITHM (nested loops):
       Outer loop picks one element at index i.
       Inner loop compares it against every element AFTER it (j = i+1...).

       WHY "j = i+1" instead of "j = 0"? So each PAIR is checked only once.
       - j must start at i+1 so an element is never compared with itself.
       - Starting j at 0 would print every pair twice (i=2,j=5 and i=5,j=2)
         and report the same duplicate multiple times.

       When numbers[i] == numbers[j], a duplicate is reported. Here i=0 (5)
       matches j=4 (5), so "Duplicate Found OF No 5" prints once.

       COMPLEXITY: O(n^2) because for n elements I make roughly n*n/2
       comparisons - fine for small arrays, slow for huge ones. */
    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            if (numbers[i]==numbers[j])
            {
                cout<<"Duplicate Found OF No " <<numbers[i] <<endl;
            }
            
        }
        
    }
    

    return 0;

}    