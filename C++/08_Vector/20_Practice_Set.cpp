#include <iostream>
#include<vector>
#include <climits>
using namespace std;

void takeVector(vector<int> &v,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"\nEnter the elemrnt at index "<<i<<":- ";
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
}

void printvector(vector<int> &v)
{
    cout<<"\nThe Elements in the vector are: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


void greatest(vector<int> &v)
{
    int max=v[0];
    for(int i=1;i<v.size();i++)
    {
        if(v[i]>max)
        {
            max=v[i];
        }
    }
    cout<<"\nGreatest Element from the vector is :- "<<max;
}

void greatercount(vector<int> &v,int num)
{
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        if (v[i]>num)
        {
            count++;
        }
    
    }
    cout<<"\nNumbers greater than the "<<num<<" are :- "<<count;
}

void maxmindiff(vector<int> &v)
{
    int max=v[0];
    int min=v[0];

    for(int i=1;i<v.size();i++)
    {
        if (v[i]>max)
        {
            max=v[i];
        }
        if(v[i]<min)
        {
            min=v[i];
        }
    }
    cout<<"\nDifference between the Maximun and Minimun no is :- "<<max-min;
}

void rmconsdup(vector<int> &v)
{
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]==v[i+1])
        {
            v.erase(v.begin()+i);
            i--;
        }
    }
}

void leroby1(vector<int> &v)
{
    auto b=v.begin();
    int temp=*b;
    v.erase(v.begin());
    v.push_back(temp);
}

void riroby1(vector<int> &v)
{
    auto e=v.end()-1;
    int temp=*e;
    v.erase(v.end()-1);
    v.insert(v.begin(),temp);
}


void secsmall(vector<int> &v)
{
    int min = v[0];
    int secmin =INT_MAX;

    for(int i=1; i<v.size(); i++)
    {
        if(v[i]<min)
        {
            secmin=min;
            min=v[i];
        }
        else if(v[i] < secmin && v[i] != min)
        {
            secmin = v[i];
        }
    }
    cout << "Second smallest: " << secmin;
}

int main() {

    int size;
    vector<int> numbers;
    cout<<"How many Elements you need to add :- ";
    cin>>size;
    takeVector(numbers,size);
    printvector(numbers);
    greatest(numbers);

    int number;
    cout<<"\nEnter the number to check how many numbers are greater than it :- ";
    cin>>number;
    greatercount(numbers,number);

    maxmindiff(numbers);

    rmconsdup(numbers);
    printvector(numbers);

    leroby1(numbers);
    printvector(numbers);

    riroby1(numbers);
    printvector(numbers);

    secsmall(numbers);

    return 0;
}