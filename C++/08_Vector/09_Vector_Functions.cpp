#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers = {1,2,3,4};

    cout << "Before clear:" << endl;
    cout << "Size = " << numbers.size() << endl;

    numbers.clear();

    cout << "After clear:" << endl;
    cout << "Size = " << numbers.size() << endl;

    numbers.push_back(100);

    cout << "First element = " << numbers.front() << endl;

    numbers.insert(numbers.begin(), 10);
    numbers.erase(numbers.begin()+2);

    for(int x : numbers)
        cout << x << " ";

        
    cout<<"\n";
    numbers.assign(4,50);
    for(int x : numbers)
        cout<< x << " ";

    cout<< endl;

    numbers.clear();
    numbers.assign(5,45);
    for(int x : numbers)
          cout <<x<<" ";
    return 0;
}