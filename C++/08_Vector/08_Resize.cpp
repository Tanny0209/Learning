#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers = {1,2,3};

    numbers.resize(5);

    cout << "After growing: ";

    for(int x : numbers)
        cout << x << " ";

    cout << endl;

    numbers.resize(2);

    cout << "After shrinking: ";

    for(int x : numbers)
        cout << x << " ";

    cout<<endl;
    return 0;
}