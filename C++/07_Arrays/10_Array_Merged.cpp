#include<iostream>
using namespace std;

int main()
{
    int first[3]={1,2,3};
    int second[3]={4,5,6};
    int merged[6];

    int index=0;

    for (int i = 0; i < 3; i++)
    {
        merged[index]=first[i];
        index++;
    }

    for (int i = 0; i < 3; i++)
    {
        merged[index]=second[i];
        index++;
    }

    for (int i = 0; i < 6; i++)
    {
        cout<<merged[i]<<endl;
    }
    
    return 0;
}