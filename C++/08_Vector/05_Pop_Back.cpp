#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers = {10,20,30,40,50};

    numbers.pop_back();

    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<endl;
    }

    return 0;
}