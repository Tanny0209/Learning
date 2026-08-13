/*
    PURPOSE: Traversing an array - visiting every element one by one using a
    loop, which is the most common way to process array data.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize an array of 5 marks.
    int marks[5]={75,89,74,58,63};

    /* TRAVERSAL means "walk through each element". We use a for loop whose
       counter i runs from 0 up to (but NOT including) 5.

       WHY "i < 5" and not "i <= 5"? Because valid indices are 0..4. Using
       "i <= 5" would try to read marks[5], which is OUT OF BOUNDS - undefined
       behavior (garbage values or a crash). This is a classic beginner bug.

       i goes 0 -> 1 -> 2 -> 3 -> 4, so we visit every element exactly once. */
    for(int i=0;i<5;i++)
    {
        // Inside the loop, "marks[i]" gives the element at the current index.
        cout<<marks[i]<<endl;
    }

    return 0;
}