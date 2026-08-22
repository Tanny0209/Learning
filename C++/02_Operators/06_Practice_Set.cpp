/*
 * LESSON: Practice applying operators to real problems.
 * Three small programs in one file that combine arithmetic (+ * / %),
 * increment (++), the compound assignment (+=) and cin for user input:
 *   1. Rectangle area from user-given length and breadth.
 *   2. Pre- vs post-increment on a user-typed number.
 *   3. Increasing a salary by 15% using +=.
 */

// Practice Set - Operators in C++

#include <iostream>
using namespace std;

int main(){

    // PROBLEM 1: Rectangle area = length * breadth (arithmetic with *).
    // cin reads from the keyboard; each >> hands one number to a variable,
    // so the user types two numbers (space-separated) on one line.
    cout << "\n--- Problem 1: Rectangle Area ---" << endl;
    int length, breadth;
    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth; // first number -> length, second -> breadth
    cout << "Area of rectangle: " << length * breadth << endl;

    // PROBLEM 2: Watch pre-increment vs post-increment on user input.
    // Integer
    cout << "\n--- Problem 2: Pre vs Post Increment ---" << endl;
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "Original number: " << number << endl;
    // ++number adds 1 FIRST, then prints the NEW value (like ++x earlier).
    cout << "After pre-increment (++number): " << ++number << endl; // adds 1 first, then prints
    number++; // Post-increment: the value is discarded, so it just adds 1.
    // number is now one higher than the previous printed value.
    cout << "Value of number after post-increment (number++): " << number << endl; // shows +1


    // PROBLEM 3: Increase a salary by 15%.
    cout << "\n--- Problem 3: Salary Increment ---" << endl;
    double salary;
    cout << "Enter your salary: ";
    cin >> salary;
    // salary += x is short for salary = salary + x.
    // salary * 0.15 computes 15% of the salary, then adds it to itself.
    salary += salary * 0.15; // Incrementing salary by 15%
    cout << "Salary after 15% increment: " << salary << endl;

}
