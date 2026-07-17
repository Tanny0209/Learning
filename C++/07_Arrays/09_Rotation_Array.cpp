#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    int size = sizeof(numbers) / sizeof(numbers[0]);
    int temp=numbers[0];

    for (int i = 0; i < size-1; i++)
    {
        numbers[i]=numbers[i+1];
    }
    numbers[size-1]=temp;

    for (int i = 0; i < size; i++)
    {
        cout<<numbers[i]<<endl;
    }

    return 0;
}