#include <iostream>
using namespace std;

// Even  Odd
bool eo(int n)
{
    if (n%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

bool sorted(int arr[],int size)
{
    bool sort=false;
    int max=arr[0];

    for(int i=1;i<size;i++)
    {
    if(arr[i] < arr[i-1])
        return false;
    }

return true;
}

void evensort(int arr[],int size)
{
    int temp[size];
    int index=0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2==0)
        {
            temp[index]=arr[i];
            index++;
        }        
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2!=0)
        {
            temp[index]=arr[i];
            index++;
        }        
    }
    
    cout<<"Sorted array is :- ";
    for (int i = 0; i < size; i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}


int second_max(int arr[],int size)
{
    int max=arr[0];
    int secondmax=arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            secondmax=max;
            max=arr[i];
        }
        else if (arr[i]>secondmax && arr[i]!=max)
        {
            secondmax=arr[i];
        }
        
    }
     return secondmax;
}

int main()
{

    int numbers[6]={1,2,3,4,5,6};
    int size=6;
    cout<< eo(7) <<endl;
    cout << sorted(numbers,size)<<endl;
    evensort(numbers,size);
    cout << second_max(numbers,size)<<endl;
    return 0;
}