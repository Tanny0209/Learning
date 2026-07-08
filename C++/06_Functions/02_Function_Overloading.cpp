#include <iostream>
using namespace std;


// Overloading by different no of arguments
int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

// Overloading by different data types
double add(double a, double b)
{
    return a + b;
}

// Change order of parameter
void display(int number, char grade)
{
    cout << "First Function";
}

void display(char grade, int number)
{
    cout << "Second Function";
}


int main()
{
    cout << add(5, 3) << endl;

    cout << add(5, 3, 2)<<endl;

    cout << add(5.5, 3.2)<< endl;

    display(10, 'A');

    cout << endl;

    display('B', 20);

    cout << endl;

    return 0;
}