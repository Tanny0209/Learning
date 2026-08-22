/*
    PURPOSE: My lesson on reading array elements from the user at runtime,
    instead of hard-coding them. This makes a program work with any data the
    user types.
*/

#include<iostream>
using namespace std;

int main()
{
    /* Declare an array WITHOUT an initializer list - it exists but its slots
       hold garbage until I fill them. The size [5] is still required so the
       compiler knows how much memory to reserve. */
    int numbers[5];

    // Ask the user what to type, so the program is self-explanatory.
    cout << "Enter 5 numbers:" << endl;

    /* INPUT LOOP: same traversal pattern as before, but here I WRITE into
       each slot. "cin >> numbers[index]" reads one number from the keyboard
       and stores it at the current index. The user can type them on one line
       or many - cin separates values by whitespace (spaces/newlines). */
    for (int index = 0; index < 5; index++)
    {
        cin >> numbers[index];
    }

    cout << "\n--- Numbers Entered By User ---" << endl;

    /* OUTPUT LOOP: I traverse the freshly-filled array and print every value.
       Two loops are needed because I must FIRST fill all slots, THEN print
       them - a single loop cannot do both at once. */
    for (int index = 0; index < 5; index++)
    {
        cout << numbers[index] << endl;
    }


    return 0;
}