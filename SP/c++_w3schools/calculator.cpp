#include <iostream>
#include <math.h>

using namespace std;

void add()
{
    cout << "You've picked Add\n";
    cout << "Enter first and second number: ";
    double a, b;
    cin >> a >> b;
    cout << "Sum of " << a << " and " << b << "is" << a + b << "\n";
}

void subtract() {
    cout << "You've picked Subtract\n";
    cout << "Enter first and second number: ";
    double a, b;
    cin >> a >> b;
    cout << "Difference of " << a << " and " << b << "is" << a - b << "\n";
}

void multiply() {
    cout << "You've picked Multiply\n";
    cout << "Enter first and second number: ";
    double a, b;
    cin >> a >> b;
    cout << "Product of " << a << " and " << b << "is" << a * b << "\n";
}

void divide() {
    cout << "You've picked Divide\n";
    cout << "Enter first and second number: ";
    double a, b;
    cin >> a >> b;
    cout << "Quotient of " << a << " and " << b << "is" << a / b << "\n";
}

void squareRoot() {
    cout << "You've picked SquareRoot\n";
    cout << "Enter number: ";
    double a;
    cin >> a;
    cout << "Square root of " << a << " is " << sqrt(a) << "\n";
}

void cubeRoot() {
    cout << "You've picked CubeRoot\n";
    cout << "Enter number: ";
    double a;
    cin >> a;
    cout << "Cube root of " << a << " is " << cbrt(a) << "\n";
}

int main()
{
    bool repeat = true;
    while (repeat)
    {
        int choice = 0;
        cout << "Pick an operation\n\n";
        cout << "\n0 - Exit";
        cout << "\n1 - Add";
        cout << "\n2 - Subtract";
        cout << "\n3 - Multiply";
        cout << "\n4 - Divide";
        cout << "\n5 - SquareRoot";
        cout << "\n6 - CubeRoot\n\n";
        cin >> choice;
        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        case 5:
            squareRoot();
            break;
        case 6:
            cubeRoot();
            break;
        default:
            break;
        }
    }
    return 0;
}

