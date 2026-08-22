/*
 * PURPOSE:
 * This lesson introduces .push_back(), the most important vector method.
 * It APPENDS a new element to the END of the vector, and the vector
 * AUTOMATICALLY grows to fit it -- something a plain array cannot do.
 */
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    // Start with an empty vector (size 0, no elements at all).
    vector<int> numbers;

    // Each push_back() adds one value to the end, growing the vector:
    // after these three calls the vector holds {10, 20, 30} in order.
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Traverse and print. size() is now 3, so the loop runs 3 times.
    cout << "\n--- Push Back ---" << endl;
    cout << "Vector elements after push_back calls: ";
    for(int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}