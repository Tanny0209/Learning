// Practice Set - Operators in C++

#include <iostream>
using namespace std;

int main(){

    // Recatangle Area Calculation
    int length, breadth;
    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle: " << length * breadth << endl;

    // Integer
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "Original number: " << number << endl;
    cout << "After pre-increment (++number): " << ++number << endl; // Pre-increment: increments number before using its value
    number++; 
    cout << "Value of number after post-increment (number++): " << number << endl; // Display the value of number after the post-increment operation


    // Incrementing Salary by 15%
    double salary;
    cout << "Enter your salary: ";
    cin >> salary;
    salary += salary * 0.15; // Incrementing salary by 15%
    cout << "Salary after 15% increment: " << salary << endl;

}
