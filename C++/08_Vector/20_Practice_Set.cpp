/*
 * PURPOSE:
 * This is my PRACTICE SET for vectors — combining everything I've learned so
 * far into useful functions. It covers: input, printing, finding max/min,
 * counting elements, removing duplicates, rotating, finding second smallest,
 * and working with vector of pairs (student records with roll number & marks).
 */
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// takeVector: reads `size` integers from the user and pushes them into the vector.
// I use pass-by-reference (&v) so the original vector gets modified, not a copy.
void takeVector(vector<int> &v, int size)
{
    cout << "\n--- Taking Vector Input ---" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the element at index " << i << " :- ";
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cout << "Input complete!" << endl;
}

// printvector: prints all elements of the vector separated by spaces.
// Simple traversal using index-based for loop — works every time.
void printvector(vector<int> &v)
{
    cout << "\nThe elements in the vector are: ";
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// greatest: finds and prints the LARGEST element in the vector.
// I start by assuming v[0] is the max, then compare each element against it.
// If I find something bigger, I update max. Classic linear scan.
void greatest(vector<int> &v)
{
    cout << "\n--- Finding Greatest Element ---" << endl;
    int max = v[0];
    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] > max)
        {
            max = v[i];
        }
    }
    cout << "Greatest element from the vector is :- " << max << endl;
}

// greatercount: counts how many elements in the vector are GREATER than `num`.
// I loop through every element, and increment a counter each time I find one
// that exceeds num. Simple counting pattern.
void greatercount(vector<int> &v, int num)
{
    cout << "\n--- Counting Numbers Greater Than " << num << " ---" << endl;
    int count = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] > num)
        {
            count++;
        }
    }
    cout << "Numbers greater than " << num << " are :- " << count << endl;
}

// maxmindiff: finds BOTH the maximum and minimum, then prints their difference.
// I track both in a single loop — saving time instead of looping twice.
// This tells me the "spread" or "range" of the data.
void maxmindiff(vector<int> &v)
{
    cout << "\n--- Finding Max-Min Difference ---" << endl;
    int max = v[0];
    int min = v[0];

    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] > max)
        {
            max = v[i];
        }
        if(v[i] < min)
        {
            min = v[i];
        }
    }
    cout << "Maximum element :- " << max << endl;
    cout << "Minimum element :- " << min << endl;
    cout << "Difference between the maximum and minimum is :- " << max - min << endl;
}

// rmconsdup: removes CONSECUTIVE duplicates from a SORTED or similar vector.
// e.g. {1,1,2,3,3} → {1,2,3}. If v[i] == v[i+1], I erase v[i] and step back
// with i-- because after erase, the next element shifts into position i.
void rmconsdup(vector<int> &v)
{
    cout << "\n--- Removing Consecutive Duplicates ---" << endl;
    for(int i = 0; i < v.size() - 1; i++)
    {
        if(v[i] == v[i+1])
        {
            v.erase(v.begin() + i);
            i--;
        }
    }
    cout << "Consecutive duplicates removed!" << endl;
}

// leroby1: LEFT ROTATE the vector by 1 position.
// e.g. {1,2,3,4} → {2,3,4,1}. I save the first element, erase it,
// then push it to the back. The vector shifts left and first wraps around.
void leroby1(vector<int> &v)
{
    cout << "\n--- Rotating Left By 1 ---" << endl;
    auto b = v.begin();
    int temp = *b;
    v.erase(v.begin());
    v.push_back(temp);
    cout << "Left rotation done!" << endl;
}

// riroby1: RIGHT ROTATE the vector by 1 position.
// e.g. {1,2,3,4} → {4,1,2,3}. I save the last element, erase it,
// then insert it at the beginning. The vector shifts right and last wraps around.
void riroby1(vector<int> &v)
{
    cout << "\n--- Rotating Right By 1 ---" << endl;
    auto e = v.end() - 1;
    int temp = *e;
    v.erase(v.end() - 1);
    v.insert(v.begin(), temp);
    cout << "Right rotation done!" << endl;
}

// secsmall: finds the SECOND SMALLEST unique element in the vector.
// I track two values: `min` (smallest) and `secmin` (second smallest, starts at INT_MAX).
// When I find a new min, the old min becomes secmin. Otherwise, if the element
// is between min and secmin, it becomes the new secmin.
void secsmall(vector<int> &v)
{
    cout << "\n--- Finding Second Smallest ---" << endl;
    int min = v[0];
    int secmin = INT_MAX;

    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] < min)
        {
            secmin = min;
            min = v[i];
        }
        else if(v[i] < secmin && v[i] != min)
        {
            secmin = v[i];
        }
    }
    cout << "Smallest element :- " << min << endl;
    cout << "Second smallest element :- " << secmin << endl;
}

// pairInput: reads student data (roll number + marks) as pairs from the user.
// Each pair stores {roll_number, marks}. I use push_back to add each pair.
void pairInput(vector<pair<int,int>> &v, int size)
{
    int first, second;

    cout << "\n--- Entering Student Data ---" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the roll no of student " << i + 1 << " :- ";
        cin >> first;
        cout << "Enter the marks of student " << i + 1 << " :- ";
        cin >> second;
        v.push_back({first, second});
    }
    cout << "Student data entry complete!" << endl;
}

// pairPrint: prints all student records from the pair vector.
// .first = roll number, .second = marks. Formatted nicely for readability.
void pairPrint(vector<pair<int,int>> &v)
{
    cout << "\n--- Student Records ---" << endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout << "Roll No :- " << v[i].first << " | Marks :- " << v[i].second << endl;
    }
}

// mostmarks: finds the student with the HIGHEST marks.
// Same linear scan pattern as greatest(), but here I'm comparing .second (marks)
// and also tracking the .first (roll number) of the top scorer.
void mostmarks(vector<pair<int,int>> &v)
{
    cout << "\n--- Finding Top Scorer ---" << endl;
    int max = v[0].second;
    int roll = v[0].first;

    for(int i = 1; i < v.size(); i++)
    {
        if(v[i].second > max)
        {
            max = v[i].second;
            roll = v[i].first;
        }
    }
    cout << "Student with Roll No " << roll << " has the most marks :- " << max << endl;
}

int main()
{
    int size;
    vector<int> numbers;
    vector<pair<int,int>> marks;
    cout << "How many elements you need to add :- ";
    cin >> size;

    // Uncomment each function call one at a time to test it individually.
    // This way I can focus on one feature without running everything at once.

    // takeVector(numbers, size);
    // printvector(numbers);
    // greatest(numbers);

    // int number;
    // cout << "\nEnter the number to check how many numbers are greater than it :- ";
    // cin >> number;
    // greatercount(numbers, number);

    // maxmindiff(numbers);

    // rmconsdup(numbers);
    // printvector(numbers);

    // leroby1(numbers);
    // printvector(numbers);

    // riroby1(numbers);
    // printvector(numbers);

    // secsmall(numbers);

    pairInput(marks, size);
    pairPrint(marks);
    mostmarks(marks);
    return 0;
}
