/*
    PURPOSE: Finding the maximum and minimum values in an array using the
    classic "compare with a running candidate" technique.
*/

#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {35, 12, 89, 27, 56};

    /* We start with the FIRST element as both maximum and minimum. This is
       safer than starting with 0 or a huge number, because we KNOW numbers[0]
       is a real value from the array. Starting with 0 would break the maximum
       search if all values were negative! */
    int maximum = numbers[0];
    int minimum=numbers[0];

    /* ALGORITHM for each element:
       - If numbers[i] is bigger than our current "maximum", this element is
         the new maximum, so update it.
       - If numbers[i] is smaller than our current "minimum", update minimum.
       After the loop, maximum holds the largest and minimum the smallest.

       Note: both checks happen on every iteration, so one pass handles both.
       We start at i=0 too - comparing numbers[0] with itself changes nothing,
       so it is harmless (starting at i=1 would also be correct). */
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i]>maximum)     
        {
            maximum=numbers[i];
        }
        if (numbers[i]<minimum)     
        {
            minimum=numbers[i];
        }
    }
    cout<<"Maximum no among them is : "<<maximum<<endl;
    cout<<"Minimum no among them is : "<<minimum<<endl;

    return 0;
}