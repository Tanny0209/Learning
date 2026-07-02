#include <iostream>
using namespace std;

int main() {
    // Scope of variables

    // Local variable example
    {
        cout << "Local Scope Example:- \n";
        int localVariable = 10; // This variable is only accessible within this block
        cout << "Local Variable: " << localVariable <<"\n"<< endl;
        
    }

    // Global variable example
    cout << "Global Scope Example:- \n";
    int globalVariable = 20; // This variable is accessible throughout the main function
    cout << "Global Variable: " << globalVariable <<"\n";

    return 0;
}