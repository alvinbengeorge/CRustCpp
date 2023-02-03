#include <iostream>
#include <string>

using namespace std;

int main()
{
    string food = "Panipuri";
    string *ptr = &food;
    cout << food << endl;
    cout << &food << endl;
    cout << ptr << endl;
    return 0;
}
/*
References are like pointers but they are more secure and easy to use.
They are also called as alias.
They are declared using & operator.
They are initialized at the time of declaration.
They cannot be NULL.
They cannot be changed once initialized.
They are always associated with some variable.
They are always in the stack memory.
They are always passed by reference.

Pointers are also called as address variables.
They are declared using * operator.
They are initialized using & operator.
They can be NULL.
They can be changed once initialized.
They are always associated with some variable.
They are always in the heap memory.
They are always passed by reference.
*/