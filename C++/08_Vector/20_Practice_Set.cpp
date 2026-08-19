#include <iostream>
#include<vector>
using namespace std;

void takeVector(vector<int> &v,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the elemrnt at index "<<i<<":- ";
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
}

void printvector(vector<int> &v)
{
    cout<<"The Elements in the vector are: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int greatest(vector<int> &v)
{
    int max=v[0];
    for(int i=1;i<v.size();i++)
    {
        if(v[i]>max)
        {
            max=v[i];
        }
    }
    cout<<"Greatest Element from the vector is :- ";
    return max;
}

int main() {

    int size;
    vector<int> numbers;
    cout<<"How many Elements you need to add :- ";
    cin>>size;
    takeVector(numbers,size);
    printvector(numbers);
    cout<<greatest(numbers);

    return 0;
}