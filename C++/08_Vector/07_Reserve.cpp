#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers;

    numbers.reserve(10);

    cout << "Size = " << numbers.size() << endl;
    cout << "Capacity = " << numbers.capacity() << endl;

    return 0;
}