/*
    PURPOSE: Left-rotating an array by one position - every element shifts one
    slot to the left and the first element wraps around to the end.
*/

#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    /* "sizeof(numbers)" is the total memory in BYTES (5 * 4 = 20 bytes for
       ints). Dividing by "sizeof(numbers[0])" (4 bytes, the size of one
       element) gives the COUNT of elements (5). This trick avoids hard-coding
       the size and works even if the array is changed later. */
    int size = sizeof(numbers) / sizeof(numbers[0]);

    /* Save numbers[0] BEFORE the shift, because it will be overwritten.
       Without this, the original first value would be lost forever. */
    int temp=numbers[0];

    /* SHIFT loop: move each element one position left.
       numbers[1]->numbers[0], numbers[2]->numbers[1], ..., up to the last.

       WHY "i < size-1"? The last valid element is at index size-1, and it has
       nothing after it to shift into it (that spot is reserved for "temp").
       Stopping at size-2 is the last index that still has a right neighbour. */
    for (int i = 0; i < size-1; i++)
    {
        numbers[i]=numbers[i+1];
    }

    // Complete the rotation: the saved first element lands at the end.
    numbers[size-1]=temp;

    /* After rotation, {10,20,30,40,50} becomes {20,30,40,50,10}. */
    for (int i = 0; i < size; i++)
    {
        cout<<numbers[i]<<endl;
    }

    return 0;
}