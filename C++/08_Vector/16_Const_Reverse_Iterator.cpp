/*
 * LESSON: CONST REVERSE ITERATORS (crbegin(), crend()).
 * This combines the last two lessons: a reverse iterator that is ALSO
 * read-only. crbegin() points at the LAST element, crend() sits one
 * position before the FIRST element, and I can never write through them.
 *   - numbers.crbegin() -> const_reverse_iterator at the LAST element (50)
 *   - numbers.crend()   -> read-only stop point one before the FIRST element
 * Why do I care? When I only want to READ a vector backwards (e.g. printing
 * a history newest-first), crbegin()/crend() guarantee at COMPILE time that
 * my loop can't accidentally modify the data.
 */

#include <iostream>  // for cout
#include <vector>    // for vector and its iterators
using namespace std;

int main()
{
    // My sample data: five integers to read in reverse without touching them.
    vector<int> numbers = {10, 20, 30, 40, 50};

    /* ---- 1. Explicit const_reverse_iterator ---- */
    // Full type spelled out: rbegin() returns a reverse iterator, and by
    // storing it as const_reverse_iterator I lock it to read-only mode.
    // *it = 5;  // COMPILE ERROR if I tried this: the iterator is const
    vector<int>::const_reverse_iterator it = numbers.rbegin();

    cout << "\n--- Last element using const_reverse_iterator ---" << endl;
    cout << *it << endl; // prints 50 - reading through it is fine

    /* ---- 2. Reverse traversal with crbegin()/crend() ---- */
    // The classic backward walk, but guaranteed read-only because
    // crbegin()/crend() hand back const_reverse_iterator even with 'auto'.
    cout << "\n--- Reverse traversal using crbegin() to crend() ---" << endl;
    for (auto rit = numbers.crbegin(); rit != numbers.crend(); ++rit)
    {
        cout << *rit << " "; // prints 50 40 30 20 10 (read-only, backwards)
    }
    cout << endl;

    /* ---- 3. Walking the const reverse iterator BACKWARD for normal order ---- */
    // Same mirror trick as lesson 15: start at crend() - 1 (the FIRST
    // element) and step with -- so output comes out in normal order,
    // all while staying strictly read-only.
    cout << "\n--- Normal order using crend()-1 down to crbegin() ---" << endl;
    for (auto rit = numbers.crend() - 1; rit != numbers.crbegin() - 1; --rit)
    {
        cout << *rit << " "; // prints 10 20 30 40 50
    }
    cout << endl;

    return 0;
}
