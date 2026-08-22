/*
 * PURPOSE:
 * This lesson shows me two handy shortcuts for reading the ends of a vector:
 * .front() returns a reference to the FIRST element, and .back() returns a
 * reference to the LAST element. They are clearer than numbers[0] and
 * numbers[size-1], and they work even if the size changes.
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers = {10,20,30,40,50};

    cout << "\n--- Front And Back ---" << endl;

    // .front() is a shortcut for numbers[0] -- gives the first element, 10.
    cout << "First element (front): " << numbers.front() << endl;

    // .back() is a shortcut for numbers[size()-1] -- the last element, 50.
    cout << "Last element (back): " << numbers.back() << endl;

    
    return 0;
}