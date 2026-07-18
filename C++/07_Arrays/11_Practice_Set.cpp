#include <iostream>
using namespace std;

int sum(int arr[],int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

double avg(int arr[],int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    return (double)sum/size;
}

int even(int arr[],int size)
{
    int count=0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2==0)
        {
            count++;
        }
    }
     return count;
}

int max(int arr[],int size)
{
    int max=arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
     return max;
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

int main()
{
    int numbers[6]={1,2,3,4,5,6};
    int size=sizeof(numbers) / sizeof(numbers[0]);
    cout<<"Sum of the array element is "<<sum(numbers,size)<<endl;
    cout<<"Average of the array element is "<<avg(numbers,size)<<endl;
    cout<<"Even numbers in the array element is "<<even(numbers,size)<<endl;
    cout<<"Maximun number in the array element is "<<max(numbers,size)<<endl;
    cout<<"Second Maximun number in the array element is "<<second_max(numbers,size)<<endl;
    cout<<"Element are sorted = "<<sorted(numbers,size)<<endl;
    evensort(numbers,size);

    return 0;
}