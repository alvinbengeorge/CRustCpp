#include<iostream>
using namespace std;

void f() {
    cout << "Hello world" << endl;
    throw "We choose to stop you here";
}

int main() {
    try {
        f();
    } catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }
}