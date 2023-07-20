#include<iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter number: " << endl;
    cin >> a;
    cout << ((a % 2 == 0) ? "Even" : "Odd") << endl;
    return 0;
}