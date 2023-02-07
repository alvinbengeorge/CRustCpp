// RA2211043010017
// EKE - K Section

//RA2211043010017 Alvin Ben George
//EKE - K Section
// Experiment no 2 References and Pointers

#include <iostream>
using namespace std;

int main()
{
    float arr[3];
    float *ptr;
    cout << "Printing address using arrays: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "&arr[" << i << "]: " << &arr[i] << endl;
    }
    ptr = arr;

    cout << "\n\nDisplaying address using pointer..." << endl;
    for (int i =0; i < 3; i++) {
        cout << "ptr + " << i << " = " << ptr + i << endl;
    }
    return 0;

}