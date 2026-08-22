/*
 * PURPOSE:
 * This lesson shows .pop_back(), the opposite of .push_back(): it REMOVES
 * the last element of the vector and shrinks its size by 1. It's a fast
 * O(1) operation because only the final element is affected.
 */
#include <iostream>
#include <vector>

using namespace std;


int main()
{
    // A vector with 5 elements: {10, 20, 30, 40, 50}.
    vector<int> numbers = {10,20,30,40,50};

    cout << "\n--- Pop Back ---" << endl;

    // Show the vector before removal so the effect of pop_back() is visible.
    cout << "Before pop_back: ";
    for(int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Remove the last element (50). The vector becomes {10,20,30,40}.
    // pop_back() takes no arguments and returns nothing -- it just deletes.
    numbers.pop_back();

    // Print whatever is left: the loop now runs 4 times because size() is 4.
    cout << "After pop_back: ";
    for(int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}