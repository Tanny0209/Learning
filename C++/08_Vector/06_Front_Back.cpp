#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers = {10,20,30,40,50};

    cout << "First = " << numbers.front() << endl;

    cout << "Last = " << numbers.back() << endl;

    
    return 0;
}