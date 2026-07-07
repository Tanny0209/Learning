#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << i<<"\n";
    }
    
// Star Pattern
    for (int s1 = 0; s1 < 5; s1++)
    {
        for (int s2 = 0; s2 < s1+1; s2++)
        {
            cout<<"*";
        }
        cout << endl;
    }
    // Factorial
    int num;
    cout << "Enter number which you want factorial :- ";
    cin >> num;
    int total =1 ;
    for (int fact = 1; fact <=num; fact++)
    {
        total*=fact;
    }
    cout<<total<<endl;

    // sum 
    int num2;
    cout << "Enter number which you want factorial :- ";
    cin >> num2;
    int sum =0;
    for (int fact = 1; fact <=num2; fact++)
    {
        sum+=fact;
    }
    cout<<sum<<endl;


    return 0;

}