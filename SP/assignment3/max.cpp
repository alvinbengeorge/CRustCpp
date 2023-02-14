// RA2211043010017 Alvin Ben George
// EKE - K Section
// Experiment no 3 Using Functions
// Program 1 Maximum of two numbers

#include <iostream>
using namespace std;

int maximum(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a = 5, b = 10;
    int max = maximum(a, b);
    cout << "Maximum is " << max << endl;
}