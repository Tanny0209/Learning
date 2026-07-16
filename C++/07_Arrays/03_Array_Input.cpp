#include<iostream>
using namespace std;

int main()
{
    int numbers[5];

    cout << "Enter 5 numbers:" << endl;

    for (int index = 0; index < 5; index++)
    {
        cin >> numbers[index];
    }

    cout<<"Numbers are :- \n";

    for (int index = 0; index < 5; index++)
    {
        cout <<numbers[index]<<endl;
    }


    return 0;
}