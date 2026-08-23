#include<iostream>
#include<vector>
using namespace std;

// Vector iterators are "random access" → they support pointer-style arithmetic
// You can add/subtract (+, -, +=, -=) to jump positions and compare iterators with < > ==

int main()
{
    vector <int> numbers={10,20,30,40,50};

    // itb points to first element (index 0), ite points to position AFTER last element (not a real element)
    vector<int>::iterator itb = numbers.begin();
    vector<int>::iterator ite= numbers.end();

    // Subtracting iterators gives the distance between them (= number of elements) → prints 5
    cout << "\n--- Iterator Arithmetic ---" << endl;
    cout << "Distance between ite and itb: " << ite-itb << endl;

    // itb+2 jumps directly to index 2 WITHOUT modifying itb → prints 30
    cout << "Value at itb+2: " << *(itb+2) << endl;

    // itb +=3 MOVES itb itself forward by 3 (now at index 3) → prints 40
    cout << "Value after itb += 3: " << *(itb +=3) << endl;

    // Since end() is one past the last element, ite-2 lands on index 3 (ite unchanged) → prints 40
    cout << "Value at ite-2: " << *(ite-2) << endl;

    // ite -=4 MOVES ite back by 4 (from past-end to index 1) → prints 20
    cout << "Value after ite -= 4: " << *(ite-=4) << endl;

    // Iterators can be compared like pointers: itb is at index 3, ite at index 1 → itb > ite is true → prints 1
    bool result=itb>ite;
    cout << "Is itb > ite? " << result << endl;

    return 0;
}