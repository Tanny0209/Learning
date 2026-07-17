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

    for (int i = 0; i < size; i++)
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

int main()
{
    int numbers[6]={1,2,3,4,5,6};
    int size=sizeof(numbers) / sizeof(numbers[0]);
    cout<<"Sum of the array element is "<<sum(numbers,size)<<endl;
    cout<<"Average of the array element is "<<avg(numbers,size)<<endl;
    cout<<"Even numbers in the array element is "<<even(numbers,size)<<endl;
    cout<<"Maximun number in the array element is "<<max(numbers,size)<<endl;
    cout<<"Second Maximun number in the array element is "<<second_max(numbers,size)<<endl;
    return 0;
}