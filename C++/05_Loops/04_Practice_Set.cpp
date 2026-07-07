#include <iostream>
using namespace std;

int main()
{
    int mul;
    cout << "Enter number which you want table : ";
    cin>> mul;

    for (int i = 1; i <= 10; i++)
    {
        cout << mul << " * " << i << " = " << mul*i<<"\n"; 
    }

   
    int sum=0;
    // Even number sum 
    for (int i = 0; i <= 100; i++)
    {
        if (i%2==0)
        {
            sum+=i;
        }
        
    }
    cout << sum <<endl;

    return 0;
}