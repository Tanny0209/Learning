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

int main()
{

    cout<< eo(7) <<endl;
}