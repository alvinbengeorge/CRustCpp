//RA2211043010017 Alvin Ben George
//EKE - K Section
// Experiment no 2 References and Pointers

#include <iostream>
using namespace std;

int main()
{
    int var = 5;
    int* pointVar = &var;
    cout << "var = " << var << endl;
    cout << "*pointVar = " << *pointVar << endl;
    cout << "\nChanging value of var to 7 ...\n";
    var = 7;
    cout << "var = " << var << "\n*pointVar = " << *pointVar;

    cout << "\nChanging value of pointVar to 16...\n";
    *pointVar = 16;
    cout << "var = " << var << "\n*pointVar = " << *pointVar;
}