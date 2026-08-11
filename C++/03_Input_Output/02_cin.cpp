#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;

    
    cout << "Enter your fullname :- \n";
    cin.ignore();
    getline(cin,name);

    cout<<"Enter your age : ";
    cin  >>age;

    // Multiple cin 
    double salary;
    char grade;

    cout << "\nEnter your salary and grade : ";
    cin >> salary >> grade;

    cout<< "Your name is "<<name;
    cout << "\nYour age is "<<age;

    cout << "\nYour Salary is " <<salary <<"\nYour Grade is "<<grade <<endl;
   
    return 0;
}