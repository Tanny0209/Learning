#include <iostream>
using namespace std;

int main() {
    int a = 10,b = 3;

    // Addition
    int sum = a + b;
    cout << "Sum: " << sum << endl;

    // Subtraction
    int difference = a - b;
    cout << "Difference: " << difference << endl;

    // Multiplication
    int product = a * b;
    cout << "Product: " << product << endl;

    // Division
    double quotient = a / b; //This will give incorrect result because both a and b are integers 
    cout << "Quotient: " << quotient << endl;
    cout<< "Quotient : "<<10.0/3<<endl; //This will give correct result because 10.0 is a double
    
    // Modulus
    int remainder = a % b;
    cout << "Remainder: " << remainder << endl;

    return 0;
}