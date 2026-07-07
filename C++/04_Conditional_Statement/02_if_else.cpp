#include <iostream>
using namespace std;

int main()
{
    int age;
    
    cout<<"Enter your age : ";
    cin >>age;

    if (age >= 18)
    {
        cout << "You are adult\n";
    }
    else{
        cout << "You are minor\n" ;
    }

    return 0;
}
