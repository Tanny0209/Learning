#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<pair <int,int>> point = {
        {10,20},
        {30,40},
        {50,60}};

    cout<<point[0].first<<" ";
    cout<<point[1].first<<" ";
    cout<<point[2].first<<" ";

    cout<<endl;

    for(int i=0; i<point.size();i++)
    {
        cout<<point[i].first<<" ";
        cout<<point[i].second<<endl;
    }    
    return 0;
}