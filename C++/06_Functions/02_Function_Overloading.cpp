/*
 * LESSON: Function overloading.
 * In C++ you may give SEVERAL functions the SAME name, as long as their
 * signatures differ. A signature = name + number, types, and order of
 * parameters. (Return type alone is NOT enough to overload.)
 *
 * HOW THE COMPILER PICKS: when you call add(...), the compiler looks at
 * the arguments you pass and picks the overload whose parameters match:
 *   1. most exact match by count and type, then
 *   2. it will do minor standard conversions (like int -> double) if needed.
 * This is called "overload resolution" and happens at COMPILE TIME.
 */

#include <iostream>
using namespace std;


// Overloading by different no of arguments
// Overload 1: takes 2 ints -> returns int.
int add(int a, int b)
{
    return a + b;
}

// Overload 2: takes 3 ints -> returns int.
// Same name, DIFFERENT number of parameters, so it is a legal overload.
int add(int a, int b, int c)
{
    return a + b + c;
}

// Overloading by different data types
// Overload 3: takes 2 doubles -> returns double.
// Same count as overload 1, but DIFFERENT parameter types, so it is legal.
double add(double a, double b)
{
    return a + b;
}

// Change order of parameter
// Both display() versions take (int, char), but in OPPOSITE order.
// Because the sequence of types differs, these are distinct overloads.
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
    // Both args are int -> matches overload 1 (int, int): prints 8.
    cout << add(5, 3) << endl;

    // Three int args -> matches overload 2 (int, int, int): prints 10.
    cout << add(5, 3, 2)<<endl;

    // Args are double literals -> matches overload 3: prints 8.7.
    // (5 and 3.2 typed as 5.5/3.2 with decimals are doubles.)
    cout << add(5.5, 3.2)<< endl;

    // int then char -> matches the FIRST display (int, char).
    display(10, 'A');

    cout << endl;

    // char then int -> matches the SECOND display (char, int).
    display('B', 20);

    cout << endl;

    return 0;
}