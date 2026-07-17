#include<iostream>
using namespace std;

int main()
{
    int numbers[8]={5,2,12,7,5,69,2,5};

    int target=5;
    int counter=0;

    for (int i = 0; i < 8; i++)
    {
        if (numbers[i]==target)
        {
            counter++;
        }
        
    }
    cout<<target<<" is repeated "<<counter<<endl;

}