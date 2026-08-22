/*
 * PURPOSE:
 * This lesson explains to me the difference between a vector's SIZE and its
 * CAPACITY, and how .reserve() pre-allocates memory ahead of time.
 * SIZE = elements actually stored. CAPACITY = memory slots available
 * without having to grab more. When size hits capacity, push_back()
 * makes the vector allocate a bigger block and copy everything over --
 * that copy is slow, so reserve() avoids repeated copying when I know
 * roughly how many elements I will add.
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // An empty vector: size 0 and (typically) capacity 0.
    vector<int> numbers;

    // Pre-allocate space for 10 ints WITHOUT adding any elements.
    // This only changes CAPACITY, not size. Now push_back() up to 10
    // times will not trigger any re-allocation or copying.
    numbers.reserve(10);

    // Size is still 0 -- no elements were created, only memory was set aside.
    cout << "\n--- Reserve ---" << endl;
    cout << "Size after reserve = " << numbers.size() << endl;
    // Capacity is at least 10 -- room to grow without re-allocating.
    cout << "Capacity after reserve = " << numbers.capacity() << endl;

    return 0;
}