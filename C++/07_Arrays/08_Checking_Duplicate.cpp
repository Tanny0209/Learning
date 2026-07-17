#include <iostream>
using namespace std;

int main()
{
    int numbers[6] = {5, 3, 2, 7, 5, 9};

    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            if (numbers[i]==numbers[j])
            {
                cout<<"Duplicate Found OF No " <<numbers[i] <<endl;
            }
            
        }
        
    }
    

    return 0;

}    