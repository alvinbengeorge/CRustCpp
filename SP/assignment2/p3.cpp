#include<iostream>
using namespace std;

/*
Add two distances in inch – feet by creating a C++ class named “AddDistance”
*/
class AddDistance {
    int feet, inch;
    public:
        void getDistance() {
            cout << "Enter feet: ";
            cin >> feet;
            cout << "Enter inch: ";
            cin >> inch;
        }
        void showDistance() {
            cout << "Feet: " << feet << endl;
            cout << "Inch: " << inch << endl;
        }
        AddDistance add(AddDistance d1, AddDistance d2) {
            AddDistance d3;
            d3.feet = d1.feet + d2.feet;
            d3.inch = d1.inch + d2.inch;
            if(d3.inch >= 12) {
                d3.feet += d3.inch/12;
                d3.inch = d3.inch%12;
            }
            return d3;
        }
};

int main() {
    AddDistance d1, d2, d3;
    d1.getDistance();
    d2.getDistance();
    d3 = d3.add(d1, d2);
    d3.showDistance();
    return 0;
}