/*
    PURPOSE: My lesson on reversing an array IN PLACE - swapping elements from
    both ends toward the middle, so no extra array is needed.
*/

#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    // Two pointers: "left" starts at the first index, "right" at the last.
    int left = 0;
    int right = 4;

    /* ALGORITHM (two-pointer swap):
       Repeat while left and right have NOT crossed:
       1. Save numbers[left] in a temp variable (otherwise I would lose it).
       2. Copy numbers[right] into numbers[left].
       3. Copy the saved temp into numbers[right].   <- this is a swap
       4. Move left forward and right backward.

       WHY temp? A naive "a=b; b=a;" copies b into a, but then b was already
       overwritten, so the original a is lost. The temp variable preserves it.

       WHY "left < right"? When the pointers meet in the middle, every pair
       has been swapped already - swapping further would UNDO my work.

       EDGE CASE: for an odd-sized array the middle element stays in place,
       which is correct. For an empty/single-element array the loop never
       runs, which is also correct. */
    while (left<right)
    {
        int temp= numbers[left];
        numbers[left]=numbers[right];
        numbers[right]=temp;
    
        left++;
        right--;
    }

    // Traverse the now-reversed array and print every element.
    cout << "\n--- Reversed Array Elements ---" << endl;

    for (int index = 0; index < 5; index++)
    {
        cout << numbers[index] << endl;
    }

    return 0;
}