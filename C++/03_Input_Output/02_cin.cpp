/*
 * LESSON: cin - reading INPUT from the keyboard.
 * cin ("character input") is the opposite of cout: it pulls whatever the user
 * types out of the input stream and stores it in variables with >>.
 * Two important details:
 *   - >> reads only ONE "token" (it stops at whitespace/space), which is why
 *     a full name (with spaces) needs getline() instead.
 *   - After a >> read, a newline is often left in the buffer; cin.ignore()
 *     discards one character (usually that newline) so the next read starts
 *     clean. Multiple >> can be chained to read several values at once.
 */

#include <iostream>
using namespace std;

int main()
{
    string name; // Will hold the full name the user types (may contain spaces)
    int age; // Will hold the age, an integer

    
    cout << "Enter your fullname :- \n";
    cin.ignore(); // Discards one character from the input buffer. Its usual
                  // job: eat the newline left over by a previous >> so that
                  // getline() below starts fresh instead of reading nothing.
    getline(cin,name); // Reads a WHOLE line, spaces included, into name.

    cout<<"Enter your age : ";
    cin  >>age; // >> reads characters until whitespace and converts them
                // into an int, storing the result in age.

    // MULTIPLE reads in one statement: >> can be chained. The user types two
    // values separated by a space; salary gets the first, grade the second.
    double salary;
    char grade;

    cout << "\nEnter your salary and grade : ";
    cin >> salary >> grade;

    cout<< "Your name is "<<name;
    cout << "\nYour age is "<<age;

    cout << "\nYour Salary is " <<salary <<"\nYour Grade is "<<grade <<endl;
   
    return 0;
}