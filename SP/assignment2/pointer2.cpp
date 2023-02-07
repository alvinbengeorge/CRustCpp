//RA2211043010017 Alvin Ben George
//EKE - K Section
// Experiment no 2 References and Pointers

#include<iostream>
using namespace std;

int main() {
    int var = 5;

    int* pointVar = &var;
    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "pointerVar: " << pointVar << endl;
    cout << "Content of address pointed to by pointVar: " << *pointVar << endl;
    return 0;
}