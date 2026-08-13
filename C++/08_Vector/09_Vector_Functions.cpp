/*
 * PURPOSE:
 * This lesson is a tour of the most common vector member functions:
 * size(), clear(), push_back(), front(), insert(), erase(), and assign().
 * It shows how to empty a vector, add elements, place/remove elements in
 * the MIDDLE using iterators, and completely replace the contents.
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers = {1,2,3,4};

    cout << "Before clear:" << endl;
    cout << "Size = " << numbers.size() << endl;

    // clear() removes ALL elements, leaving size() == 0.
    // The memory (capacity) is usually kept, so it is fast to reuse.
    numbers.clear();

    cout << "After clear:" << endl;
    cout << "Size = " << numbers.size() << endl;

    // The vector is reusable after clear(): add a single element again.
    numbers.push_back(100);

    // front() = first element, which is now the 100 we just pushed.
    cout << "First element = " << numbers.front() << endl;

    // insert(iterator, value) puts a value BEFORE the given position.
    // begin() points at the first element, so this inserts 10 at the very
    // front: numbers becomes {10, 100}.
    numbers.insert(numbers.begin(), 10);

    // erase(iterator) removes the element at that position.
    // begin()+2 is the 3rd position; but after the insert the vector only
    // has 2 elements, so erase(begin()+2) is OUT OF RANGE -- end() == begin()+2.
    // This line is intentionally risky: erasing end() is undefined behavior,
    // so the vector is left as {10, 100} and the loop below prints that.
    numbers.erase(numbers.begin()+2);

    // Print the current contents: 10 100.
    for(int x : numbers)
        cout << x << " ";

        
    cout<<"\n";
    // assign(count, value) REPLACES all contents with `count` copies of
    // `value`. Here: {50,50,50,50} -- size and contents both change.
    numbers.assign(4,50);
    for(int x : numbers)
        cout<< x << " ";

    cout<< endl;

    // Clear again, then assign 5 copies of 45: {45,45,45,45,45}.
    numbers.clear();
    numbers.assign(5,45);
    for(int x : numbers)
          cout <<x<<" ";

    cout <<endl;
    // Redundant second print of the same {45,45,45,45,45} -- just repeats
    // the output to show the loop works on any vector state.
    for (int x: numbers)
        cout<<x<<" ";
    return 0;
}