#include<iostream>

using namespace std;

int main() {
    int sum=0, smallest, largest, a[] = {10, 12, 20, 45, 32, 31, 35, 60};
    float average;
    largest = a[0];
    smallest = a[0];
    for(int i=0; i<8; i++) {
        sum += a[i];
        if(a[i] > largest) {
            largest = a[i];
        }
        if(a[i] < smallest) {
            smallest = a[i];
        }
    }
    average=(float)sum/8;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
    
    return 0;
}