/*
 * PURPOSE:
 * This lesson is about VECTOR OF PAIRS — storing key-value style data inside
 * a vector. Each element is a pair<int,int> where .first is the first value
 * and .second is the second value. Think of it like a mini spreadsheet with
 * two columns, or storing (x,y) coordinates, or (roll_no, marks) for students.
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // A vector of pairs: each element holds TWO integers together.
    // pair<int,int> means a pair where both values are ints.
    // I'm initializing it with 3 pairs: (10,20), (30,40), (50,60).
    vector<pair <int,int>> point = {
        {10,20},
        {30,40},
        {50,60}};

    // Accessing individual parts of a pair:
    // point[i].first  → the first value of the pair at index i
    // point[i].second → the second value of the pair at index i
    // Here I print only the .first of each pair to show individual access.
    cout << "\n--- Accessing .first Of Each Pair ---" << endl;
    cout << "point[0].first = " << point[0].first << endl;
    cout << "point[1].first = " << point[1].first << endl;
    cout << "point[2].first = " << point[2].second << endl;

    cout << endl;

    // Now I traverse the entire vector of pairs using a for loop.
    // For each pair, I print both .first and .second to see the full data.
    // This is the most common pattern when working with pair vectors.
    cout << "\n--- Traversing The Pair Vector ---" << endl;
    for(int i = 0; i < point.size(); i++)
    {
        cout << "Pair [" << i << "] → .first = " << point[i].first
             << " , .second = " << point[i].second << endl;
    }

    return 0;
}
