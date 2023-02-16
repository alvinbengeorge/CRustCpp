// RA2211043010017 Alvin Ben George
// EKE - K Section
// Experiment no 3 Using Functions
// Program 2 Multiply two numbers of different datatypes
#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    return a * b;
}

double multiply(double a, double b)
{
    return a * b;
}

int main()
{
    int a = multiply(3, 5);
    double b = multiply(13.4, 3.3);
    cout << "a -> " << a << endl;
    cout << "b -> " << b << endl;
}