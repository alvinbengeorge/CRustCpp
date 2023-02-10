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

    cout << suzuki.name << "\n" << suzuki.mileage << endl;

    return 0;
}