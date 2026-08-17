#include <iostream>
#include <vector>
using namespace std;

// swap() exchanges the contents of two vectors in O(1) time
// It just swaps internal pointers, no elements are actually copied

int main()
{
    vector <int> first={1,2,3};
    vector <int> second={10,20,30};

    // Print both vectors before swap to show their original state
    cout<<"Before swap: "<<endl;
    cout<<"First vector: "; 
    for(int i=0;i<first.size();i++)
    {
        cout<<first[i]<<" ";
    }
    cout<<endl;
    cout<<"Second vector: "; 
    for(int i=0;i<second.size();i++)
    {
        cout<<second[i]<<" ";
    }
    cout<<endl;

    // swap() exchanges contents of first and second — first becomes {10,20,30}, second becomes {1,2,3}
    first.swap(second);

    // Print both vectors after swap to verify the exchange
    cout<<"After swap: "<<endl;
    cout<<"First vector: "; 
    for(int i=0;i<first.size();i++)
    {
        cout<<first[i]<<" ";
    }
    cout<<endl;
    cout<<"Second vector: "; 
    for(int i=0;i<second.size();i++)
    {
        cout<<second[i]<<" ";
    }
    cout<<endl;

}