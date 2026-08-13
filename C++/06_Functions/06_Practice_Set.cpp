/*
 * LESSON: Functions practice set.
 * Uses several functions to explore key ideas:
 *   - bool functions returning true/false (even/odd, sorted check).
 *   - ARRAYS as function parameters: arr[] passes a pointer to the first
 *     element, so functions can READ and MODIFY the caller's data
 *     directly (call by reference behavior, even though no & is used).
 *   - The size of the array is passed separately because a bare array
 *     parameter does not know its own length.
 *   - return values, loops inside functions, and compound logic.
 */

#include <iostream>
using namespace std;

// Even Odd: returns true if n is even, false if odd.
bool eo(int n)
{
    // n%2 gives the remainder of n/2. 0 remainder -> divisible by 2 -> even.
    if (n%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    // (This could be written as a single line: return n%2==0;)
}

// sorted: returns true if the array is in non-decreasing order.
bool sorted(int arr[],int size)
{
    // NOTE: this function uses arrays directly - modifying arr[] here
    // would also change the array in the caller (arrays pass by pointer).
    bool sort=false;          // Declared but never used - dead code kept as-is.
    int max=arr[0];

    // Start at index 1 and compare each element to its predecessor.
    for(int i=1;i<size;i++)
    {
    // If ANY element is smaller than the one before it, order is broken.
    if(arr[i] < arr[i-1])
        return false;         // Early exit: no need to check the rest.
    }

return true;                  // All pairs were in order, so it is sorted.
}

// evensort: builds a NEW array where all even numbers come first,
// followed by all odd numbers (relative order within each group is kept).
void evensort(int arr[],int size)
{
    int temp[size];           // Temporary result array (same length).
    int index=0;              // Where to write the next number in temp.

    // Pass 1: copy every EVEN element to the front of temp.
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2==0)      // remainder 0 -> even.
        {
            temp[index]=arr[i];
            index++;          // Move the write position forward.
        }
    }

    // Pass 2: copy every ODD element right after the evens.
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2!=0)      // remainder not 0 -> odd.
        {
            temp[index]=arr[i];
            index++;
        }
    }

    // Print the rearranged array.
    cout<<"Sorted array is :- ";
    for (int i = 0; i < size; i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}


// second_max: finds the second largest value in the array.
int second_max(int arr[],int size)
{
    int max=arr[0];           // Track the largest value seen so far.
    int secondmax=arr[0];     // Track the second largest seen so far.

    // Walk through every element once (single pass algorithm).
    for (int i = 0; i < size; i++)
    {
        // Found a new largest: the old largest becomes the second largest.
        if (arr[i]>max)
        {
            secondmax=max;
            max=arr[i];
        }
        // Otherwise, maybe it is bigger than the current second but not
        // equal to the largest (the arr[i]!=max guard avoids ties).
        else if (arr[i]>secondmax && arr[i]!=max)
        {
            secondmax=arr[i];
        }

    }
     return secondmax;
}

int main()
{

    int numbers[6]={1,2,3,4,5,6};   // Test array.
    int size=6;                     // Passed separately to the functions.
    cout<< eo(7) <<endl;            // 7 is odd -> prints 0 (false).
    cout << sorted(numbers,size)<<endl;   // 1..6 ascending -> prints 1 (true).
    evensort(numbers,size);         // Prints: 2 4 6 1 3 5.
    cout << second_max(numbers,size)<<endl;   // 5 is the second largest.
    return 0;
}