// Logical Operators
#include <iostream>
using namespace std;        

int main() {
    int a = 5, b = 10, c = 15;

    // Logical AND (&&)
    if (a < b && b < c) {
        cout << "Both conditions are true." << endl;
    }

    // Logical OR (||)
    if (a > b || b < c) {
        cout << "At least one condition is true." << endl;
    }

    // Logical NOT (!)
    if (!(a > b)) {
        cout << "Condition is false." << endl;
    }

    //Short-circuit evaluation
    if (a < b && c < b) {
        cout << "This will not be printed because the second condition is false." << endl;
    } else {
        cout << "Short-circuit evaluation prevents the second condition from being evaluated." << endl;
    }

    return 0;
}   