#include <iostream>
using namespace std;

int main()
{
    int length, width;
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the reactangle: ";
    cin >> width;
    cout << "Area of the rectangle: " << length * width << "\n";
    cout << "Perimeter of the rectangle: " << (2 * (length + width)) << "\n";
}