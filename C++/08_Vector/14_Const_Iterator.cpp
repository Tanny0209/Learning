/*
 * LESSON: CONST ITERATORS (const_iterator, cbegin(), cend()).
 * A const_iterator is an iterator that treats every element as READ-ONLY.
 * I can move it around (++, --) as much as I want, but I can NOT modify
 * the element it points to through *it - the compiler stops me.
 * Why do I care? It documents my intent ("I'm only reading here") and lets
 * me safely iterate over a const vector, which a normal iterator can't do.
 *   - num.begin()   -> returns iterator        (can read AND write)
 *   - num.cbegin()  -> returns const_iterator  (read ONLY)
 *   - num.cend()    -> const_iterator one PAST the last element
 * Note: assigning to *it when 'it' is a const_iterator is a COMPILE error,
 * so mistakes are caught before my program ever runs.
 */

#include <iostream>  // for cout
#include <vector>    // for vector and its iterators
using namespace std;

int main()
{
    // My sample data: four integers to walk over without changing them.
    vector<int> num = {10, 20, 30, 40};

    /* ---- 1. Explicit const_iterator from begin() ---- */
    // I explicitly ask for vector<int>::const_iterator here. Even though
    // begin() normally hands back a plain iterator, storing it in a
    // const_iterator downgrades it to read-only for me.
    vector<int>::const_iterator it = num.begin();

    // *it = 100;  // COMPILE ERROR: I cannot write through a const_iterator

    cout << "\n--- First element using const_iterator ---" << endl;
    cout << *it << endl; // reading is perfectly fine, only writing is banned

    /* ---- 2. Traversal with a while loop ---- */
    // Reading-only walk: dereference with *it to print, it++ to advance.
    // The loop ends when 'it' reaches num.end() (one past the last element).
    cout << "\n--- Traversal using const_iterator (while loop) ---" << endl;
    while (it != num.end())
    {
        cout << *it << " "; // read-only access: allowed
        it++;               // moving the iterator itself is also allowed
    }
    cout << endl;

    /* ---- 3. cbegin()/cend(): guaranteed const from the start ---- */
    // cbegin()/cend() return const_iterator directly, so even with 'auto'
    // (which would otherwise deduce a plain iterator) I stay read-only.
    // This is my preferred way to say "this loop must never modify num".
    cout << "\n--- Traversal using cbegin() and cend() ---" << endl;
    for (auto it = num.cbegin(); it != num.cend(); it++)
    {
        // *it = 50; // would be a compile error: cbegin() gave me const_iterator
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
