#include<iostream>
#include<vector>
using namespace std;

// Iterator is like a pointer that points to elements inside a vector
// It lets you traverse and modify elements without using index []

int main()
{
    
    vector <int> numbers={10,20,30};

    
    // Create iterator pointing to the first element (index 0)
    cout << "\n--- Iterator Basics ---" << endl;
    vector<int>::iterator it=numbers.begin();
    cout << "Value at begin(): " << *it << endl;  // Dereference *it to get value → prints 10

    // Move iterator forward by 2 positions → now points to index 2 (value 30)
    it +=2;
    cout << "Value after it += 2: " << *it << endl;  // prints 30

    // Reassign value at current iterator position (index 2) from 30 to 100
    cout << "\n--- After Reassigning ---" << endl;
    *it=100;

    // Print entire vector to confirm the change: {10, 20, 100}
    cout << "Vector elements: ";
    for(int i=0;i<numbers.size();i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}