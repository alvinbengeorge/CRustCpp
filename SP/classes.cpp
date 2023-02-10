#include <iostream>
using namespace std;

class CAR { 
    public:
    string name;
    double mileage;

};

int main() {
    CAR suzuki;
    suzuki.name = "suzuki";
    suzuki.mileage = 13.4;

    CAR benz;
    benz.mileage = 18.2;
    benz.name = "benz";

    cout << suzuki.name << "\n" << suzuki.mileage <<  "\n\n";
    cout << benz.name << "\n" << benz.mileage << endl;

    return 0;
}