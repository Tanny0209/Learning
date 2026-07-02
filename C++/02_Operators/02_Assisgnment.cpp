#include <iostream>
using namespace std;

int main() {
    int a=10,b,c=60;

    b=a; // Assignment operator
    a=60;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;

    a+=10; // Compound assignment operator
    cout<<"Value of a after a+=10: "<<a<<endl;

    b-=5; // Compound assignment operator
    cout<<"Value of b after b-=5: "<<b<<endl;

    a*=2; // Compound assignment operator
    cout<<"Value of a after a*=2: "<<a<<endl;

    c/=15; // Compound assignment operator
    cout << "Value of c after c/=15: " << c << endl;

    return 0;
    
}