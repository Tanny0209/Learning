// ++x and x++ are both increment operators in C++. The difference between them lies in when the increment operation takes place.

#include <iostream> 
using namespace std;

int main() {
    int x = 5;
    cout << "Initial value of x: " << x << endl;

    cout << "Value of x after pre-increment (++x): " << ++x << endl; // Pre-increment: increments x before using its value
    cout << "Value of x after post-increment (x++): " << x++ << endl; // Post-increment: uses the current value of x, then increments it
    cout << "Value of x after post-increment (x++): " << x << endl; // Display the value of x after the post-increment operation
    return 0;
}   