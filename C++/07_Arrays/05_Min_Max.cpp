#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {35, 12, 89, 27, 56};

    int maximum = numbers[0];
    int minimum=numbers[0];

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i]>maximum)     
        {
            maximum=numbers[i];
        }
        if (numbers[i]<minimum)     
        {
            minimum=numbers[i];
        }
    }
    cout<<"Maximum no among them is : "<<maximum<<endl;
    cout<<"Minimum no among them is : "<<minimum<<endl;

    return 0;
}