/*
 * PURPOSE:
 * This lesson shows me how to READ and WRITE individual elements of a vector.
 * It compares the subscript operator [] with the .at() member function.
 * BOTH use a zero-based index: index 0 is the first element.
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // A vector of 5 ints. I remember: element indexes go 0..4.
    vector<int> numbers = {10,20,30,40,50};

    // [] operator: reads the element at index 2 (the third one, value 30).
    // Works just like a plain array.
    cout << "\n--- Reading With [] ---" << endl;
    cout << "Element at index 2: " << numbers[2] << endl;

    
    // [] operator can also be used on the LEFT side to change a value:
    // this overwrites index 2, so 30 becomes 300.
    numbers[2] = 300;

    // Verify the change: now prints 300 instead of 30.
    cout << "\n--- Writing With [] ---" << endl;
    cout << "Element at index 2 after writing: " << numbers[2] << endl;

    // .at() is a member function that does the same thing as [] but with
    // an extra safety check: it throws an exception if the index is out of
    // range. Good when the index comes from user input I don't trust.
    cout << "\n--- Accessing With .at() ---" << endl;
    cout << "Element at index 4: " << numbers.at(4) << endl;
    numbers.at(4) = 78;
    cout << "Element at index 4 after writing: " << numbers.at(4) << endl;

    return 0;
}