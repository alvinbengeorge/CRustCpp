#include<iostream>
using namespace std;


int AREA(int length, int breadth) {
    return length * breadth;
}

float AREA(float base, float height) {
    return (float)(0.5 * base * height);
}

int main() {
    int choice;
    cout << "Enter 1 for area of rectangle and 2 for area of triangle: ";
    cin >> choice;
    cout << "\n\n";

    switch (choice) {
        case 1:
            int l, b;
            cout << "Enter Length and breadth" << endl;
            cin >> l >> b;
            cout << "The area of the rectangle is : " << AREA(l, b) << endl;;
            break;
        case 2:
            float base, height;
            cout << "Enter base and height" << endl;
            cin >> base >> height;
            cout << "Area of the triangle is : " << AREA(base, height);
            break;
        default:
            cout << "Invalid choice" << endl;
    }
    return 0;
}