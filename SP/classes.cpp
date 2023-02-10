#include <iostream>
using namespace std;

class CAR { 
    public:
    string name;
    double mileage;

    void printMileageAndName() {
        cout << this->name << "\n" << this->mileage << "\n\n";
    }

};

int main() {
    CAR suzuki;
    suzuki.name = "suzuki";
    suzuki.mileage = 13.4;

    CAR benz;
    benz.mileage = 18.2;
    benz.name = "benz";

    benz.printMileageAndName();
    suzuki.printMileageAndName();

    return 0;
}