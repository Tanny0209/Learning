#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {10,20,30,40,50};

    cout << numbers[2] << endl;

    numbers[2] = 300;

    cout << numbers[2]<<endl;

    cout << numbers.at(4)<<endl;
    numbers.at(4) = 78;
    cout << numbers.at(4)<<endl;

    return 0;
}