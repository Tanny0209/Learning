#include<iostream>
#include<vector>
using namespace std; 

int main()
{
    vector<int> num={1,2,3,4,5,6};
    vector<int>:: iterator it= num.begin();

    cout<<endl<<"Iterator Traversal using While Loop :- ";
    while (it!=num.end())       
    {
        cout<<*it<<" ";
        it++;
    }

    cout<<endl<<"Iterator Traversal using For Loop :- ";
    for(auto it=num.begin();it!=num.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl<<"Modifying the vector elements using Iterator";
    for(auto it = num.begin(); it != num.end(); it++)
    {
        *it = *it * 2;
    }

    cout<<endl<<"Iterator Traversal using Range Based For Loop :- ";
    for(int x : num)
    {
        cout << x << " ";
    }

}