// RA2211043010017 Alvin Ben George
// EKE - K Section
// Experiment no 5 Stacks
// Program 3 Create a stack of programming languages and display the length of the stack.

#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<string> languages;
    languages.push("C++");
    languages.push("C");
    languages.push("Java");
    languages.push("Python");

    cout << "Length of the stack => " << languages.size() << endl;
}