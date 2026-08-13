/*
 * PURPOSE:
 * This lesson shows how to TRAVERSE (walk through) every element of a
 * vector using a classic index-based for loop, and introduces the .size()
 * member function which tells you how many elements the vector holds.
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {5,10,15,20};

    // Classic for loop: i goes 0,1,2,3. .size() returns 4, so the loop
    // stops before i reaches 4 -- avoiding the off-by-one error you'd get
    // with <= or a hardcoded number. Using .size() also keeps the loop
    // correct if the vector ever grows or shrinks.
    for(int i = 0; i < numbers.size(); i++)
    {
        // Print the element at the current position i, one per line.
        cout << numbers[i] <<endl;
    }

    // (A range-based for loop would also work here -- see lesson 08.)

    return 0;
}