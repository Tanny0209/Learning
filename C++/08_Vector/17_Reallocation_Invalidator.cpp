/*
 * LESSON: ITERATOR INVALIDATION (reallocation & erase).
 * A vector stores its elements in ONE contiguous block of memory. When I
 * push_back() past its capacity, the vector quietly allocates a BIGGER
 * block, copies everything over, and frees the old block. My old iterators
 * still hold the OLD address -> they become DANGLING (undefined behaviour
 * if I use them!). Rules I must remember:
 *   1. ANY growth-triggered reallocation invalidates ALL iterators,
 *      pointers and references into the vector.
 *   2. insert()/erase() invalidate iterators at and after the change point
 *      (even without reallocation).
 *   3. SAFE HABIT: after any modifying operation, REFRESH my iterator -
 *      luckily erase() returns a valid iterator to the element right after
 *      the erased one, so I can pick up from there safely.
 */

#include <iostream>  // for cout
#include <vector>    // for vector
using namespace std;

int main()
{
    // My sample data: five integers.
    vector<int> num = {10, 20, 30, 40, 50};

    /* ---- 1. Iterator BEFORE any modification ---- */
    auto it = num.begin(); // points at element 10

    cout << "\n--- Iterator before modification ---" << endl;
    cout << *it << endl;                 // fine: prints 10
    cout << "Capacity: " << num.capacity() << endl; // my current reserved slots

    /* ---- 2. push_back() may REALLOCATE and kill my iterator ---- */
    // If capacity is full, the vector moves house -> 'it' still remembers
    // the OLD address. Using *it after this point is UNDEFINED BEHAVIOUR:
    // it might print 10, might print garbage, might crash. Never trust an
    // iterator across a push_back!
    num.push_back(60);

    cout << "\n--- After push_back(60) ---" << endl;
    cout << "Capacity: " << num.capacity() << endl; // compare: did we move house?
    cout << "*it (DANGLING - do not rely on this): " << *it << endl;

    // SAFE WAY: get a FRESH iterator after the modification.
    cout << "\n--- Traversal with a fresh iterator ---" << endl;
    for (auto freshIt = num.begin(); freshIt != num.end(); freshIt++)
    {
        cout << *freshIt << " "; // prints 10 20 30 40 50 60
    }
    cout << endl;

    /* ---- 3. erase() also invalidates, but RETURNS a valid iterator ---- */
    // num.erase(num.begin()+1) removes element 20 AND shifts everything
    // after it left by one slot. Iterators past that point are stale...
    // BUT erase() hands me back an iterator to the element AFTER the one
    // erased (here: 30). That returned iterator IS valid, so I use it.
    auto erit = num.erase(num.begin() + 1); // removes 20, erit -> 30

    cout << "\n--- After erase(num.begin()+1) ---" << endl;
    cout << "Element at returned iterator: " << *erit << endl; // prints 30

    // Fresh traversal to confirm the final state of my vector.
    cout << "\n--- Final vector contents ---" << endl;
    for (auto checkIt = num.begin(); checkIt != num.end(); checkIt++)
    {
        cout << *checkIt << " "; // prints 10 30 40 50 60
    }
    cout << endl;

    return 0;
}
