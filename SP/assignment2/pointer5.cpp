//RA2211043010017 Alvin Ben George
//EKE - K Section
// Experiment no 2 References and Pointers

#include <iostream>
using namespace std;

int main() {
    float arr[5];

    cout << "Enter 5 numbers" << endl;

    for (int i = 0; i < 5; i++) { 
        cin >> *(arr + i);
    }

    cout << "Display data: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << (&arr + i) << " = " << *(arr + i) << endl;
    }
}