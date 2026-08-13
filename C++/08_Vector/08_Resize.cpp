/*
 * PURPOSE:
 * This lesson shows me .resize(), which actually changes the vector's SIZE
 * (number of elements), unlike reserve() which only changes capacity.
 * resize() can GROW the vector (new elements are value-initialized to 0
 * for ints) or SHRINK it (excess trailing elements are discarded). It also
 * introduces the range-based for loop (`for(int x : numbers)`).
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers = {1,2,3};

    // Grow to 5 elements: the vector becomes {1,2,3,0,0}. The two new
    // elements are value-initialized (0 for int) because no value given.
    numbers.resize(5);

    cout << "After growing: ";

    // Range-based for loop: `int x` takes a COPY of each element in order,
    // so the body runs once per element without any index bookkeeping.
    for(int x : numbers)
        cout << x << " ";

    cout << endl;

    // Shrink to 2 elements: the last 3 are deleted, leaving {1,2}.
    numbers.resize(2);

    cout << "After shrinking: ";

    // Walk the shrunken vector the same way and print 1, 2.
    for(int x : numbers)
        cout << x << " ";

    cout<<endl;
    return 0;
}