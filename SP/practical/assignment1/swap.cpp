#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first variable: ";
    cin >> a;
    cout << "\nEnter second variable: ";
    cin >> b;
    cout << "\n";
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "First variable = " << a << "\n";
    cout << "Second variable = " << b << "\n";
    return 0;
}
