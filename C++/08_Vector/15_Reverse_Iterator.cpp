/*
 * LESSON: REVERSE ITERATORS (rbegin(), rend()).
 * A reverse iterator walks the vector BACKWARDS, but I still use ++ to move.
 * The trick: rbegin() points at the LAST element and rend() points ONE BEFORE
 * the first element (a purely conceptual position - never dereference it).
 * So "++" on a reverse iterator moves it TOWARDS THE FRONT of my vector.
 *   - numbers.rbegin() -> reverse iterator at the LAST element (50)
 *   - numbers.rend()   -> one position before the FIRST element (stop here)
 * Why do I care? It lets me traverse in reverse with a natural ++ loop
 * instead of juggling indexes like i = size-1; i >= 0; i--.
 */

#include <iostream>  // for cout
#include <vector>    // for vector and its iterators
using namespace std;

int main()
{
    // My sample data: five integers I will print front-to-back AND back-to-front.
    vector<int> numbers = {10, 20, 30, 40, 50};

    /* ---- 1. Reverse traversal: back to front ---- */
    // 'it' starts at rbegin() = element 50 (the last one). Each it++
    // steps BACKWARD through memory: 50 -> 40 -> 30 -> 20 -> 10.
    // When 'it' hits rend() (conceptually before element 10), I stop.
    cout << "\n--- Reverse traversal using rbegin() to rend() ---" << endl;
    for (auto it = numbers.rbegin(); it != numbers.rend(); it++)
    {
        cout << *it << " "; // prints 50 40 30 20 10
    }
    cout << endl;

    /* ---- 2. Forward-order output by walking the reverse iterator BACK ---- */
    // Here I flip the logic: I start at rend() - 1, which is the FIRST
    // element (10). Walking with it-- moves me toward the BACK of the
    // vector, so the elements come out in normal order again.
    // I stop when I cross rbegin() - 1, i.e. after printing the last one.
    // This proves reverse iterators are just ordinary iterators seen in a mirror.
    cout << "\n--- Normal order using rend()-1 down to rbegin() ---" << endl;
    for (auto it = numbers.rend() - 1; it != numbers.rbegin() - 1; it--)
    {
        cout << *it << " "; // prints 10 20 30 40 50
    }
    cout << endl;

    return 0;
}
