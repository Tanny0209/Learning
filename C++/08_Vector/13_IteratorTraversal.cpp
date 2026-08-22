/*
 * LESSON: Traversing a vector with ITERATORS.
 * An iterator is an object that "points to" an element inside a container
 * (like a smart pointer for vectors). Key operations:
 *   - num.begin() -> iterator pointing at the FIRST element
 *   - num.end()   -> iterator pointing ONE PAST the last element (never
 *                    dereference end() itself!)
 *   - *it         -> dereferences the iterator, giving the element it points to
 *   - it++ / ++it -> moves the iterator to the NEXT element
 * I can traverse with a while loop, a classic for loop, or (after C++11) a
 * range-based for loop. Iterators can also MODIFY elements through *it.
 */

#include <iostream>  // for cout
#include <vector>    // for vector and its iterators
using namespace std;

int main()
{
    // A vector holding six integers to walk through.
    vector<int> num = {1, 2, 3, 4, 5, 6};

    /* ---- 1. While loop traversal ---- */
    // 'it' starts at num.begin() (first element). The loop keeps running
    // while 'it' has NOT reached num.end(). Inside, *it reads the current
    // element and it++ advances one step. When it == end(), all elements
    // have been visited and the loop stops.
    vector<int>::iterator it = num.begin(); // iterator -> first element

    cout << "\n--- Iterator Traversal using While Loop ---" << endl;
    while (it != num.end())
    {
        cout << *it << " "; // *it = the element the iterator points at
        it++;               // move to the next element
    }
    cout << endl;

    /* ---- 2. Classic for loop traversal ---- */
    // Same idea, but the three loop parts (init; condition; update) sit on
    // one line. 'auto' asks the compiler to deduce the long type name
    // vector<int>::iterator for me - cleaner and less error-prone.
    cout << "\n--- Iterator Traversal using For Loop ---" << endl;
    for (auto it2 = num.begin(); it2 != num.end(); it2++)
    {
        cout << *it2 << " ";
    }
    cout << endl;

    /* ---- 3. MODIFYING elements through an iterator ---- */
    // Because *it refers to the ACTUAL element (not a copy), assigning to
    // *it overwrites that slot in the vector. Here every element is doubled:
    // {1,2,3,4,5,6} becomes {2,4,6,8,10,12}.
    cout << "\n--- Modifying the vector elements using Iterator ---" << endl;
    for (auto it3 = num.begin(); it3 != num.end(); it3++)
    {
        *it3 = *it3 * 2; // write through the iterator: double each element
    }

    /* ---- 4. Range-based for loop traversal (C++11) ---- */
    // The modern way: 'int x' takes a COPY of each element in turn, so no
    // iterator syntax is needed. Use 'int &x' instead when I want to modify
    // elements this way. Note the doubled values prove step 3 really worked.
    cout << "\n--- Iterator Traversal using Range Based For Loop ---" << endl;
    for (int x : num)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0; // 0 signals successful completion to the operating system.
}
