#include <iostream>
using namespace std;

int main()
{
    int marks[5]={87,95,77,68,88};
    int target=77;

    for (int i = 0; i < 5; i++)
    {
        if (marks[i]==target)
        {
            cout<<"Number found at index "<<i<<endl;
            break;
        }
    }
}