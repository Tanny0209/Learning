/*
    PURPOSE: Introduction to arrays - how to declare an array, initialize it
    with values, read a single element, and change (update) an element.
*/

#include <iostream>
using namespace std;

int main()
{
    /* Arrays are fixed-size containers for multiple values of the SAME type.
       Here we create an array of 5 integers named 'marks'.
       - "int"   : the type of each element
       - "marks" : the name of the array (like a variable name)
       - "[5]"   : the size - it holds exactly 5 integers
       - "{...}" : initializer list that fills the 5 slots in one go */
    int marks[5]={35,45,65,44,66};

    /* IMPORTANT: array indices are ZERO-BASED. The first element lives at
       index 0, so "marks[1]" is the SECOND element (value 45 here), not the
       first. Beginners often make this mistake! */
    cout<< marks[1]<<endl;

    /* "marks[1]=46;" UPDATES the element at index 1. Arrays are mutable:
       we can read and also overwrite any existing element. After this line
       the array becomes {35,46,65,44,66}. */
    marks[1]=46;

    /* This prints 46, proving the value really was changed above. */
    cout<< marks[1]<<endl;
    return 0;
}