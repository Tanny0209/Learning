#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    int left = 0;
    int right = 4;

    while (left<right)
    {
        int temp= numbers[left];
        numbers[left]=numbers[right];
        numbers[right]=temp;
    
        left++;
        right--;
    }
    for (int index = 0; index < 5; index++)
    {
        cout << numbers[index] << endl;
    }

    return 0;
}