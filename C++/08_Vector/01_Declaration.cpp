/*
 * PURPOSE:
 * This lesson shows the different ways to DECLARE and INITIALIZE
 * a std::vector. A vector is a DYNAMIC ARRAY: it can grow and shrink
 * at runtime, unlike a plain C++ array whose size is fixed forever.
 * The element type goes inside the angle brackets: vector<int> holds ints.
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Default construction: an EMPTY vector with no elements and size 0.
    vector<int> first;

    // Initializer list: create a vector holding 10, 20, 30 in that order.
    // This is the most readable way to start a vector with known values.
    vector<int> second = {10,20,30};

    // Size constructor: a vector with 5 elements, all default-initialized.
    // For int, "default" means 0, so third == {0,0,0,0,0}.
    vector<int> third(5);

    // Fill constructor: 5 elements, ALL filled with the value 100.
    // So fourth == {100,100,100,100,100}. Great for making a "pad" array.
    vector<int> fourth(5,100);
    
    return 0;
}
