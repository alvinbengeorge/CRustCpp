// RA2211043010017 Alvin Ben George
// EKE - K Section
// Experiment no 3 Using Functions

#include<iostream>
using namespace std;

void fn(int* a)  {
    *a = 33; 
} 

int main() {
    int number = 14;
    fn(&number);
    cout << "number after pointer modification => " << number << endl;
    return 0;
}