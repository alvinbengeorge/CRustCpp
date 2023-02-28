// RA2211043010017 Alvin Ben George
// EKE - K Section
// Experiment no 5 Stacks
// Program 4 Create a stack of integers, Use empty method to check if the stack is empty
//           add two elements to the stack and then check if the stack is empty

#include<iostream>
#include<stack>

using namespace std;

int main() {
    stack<int> integers;
    
    cout << "The stack is " << (integers.empty() ? "empty" : "not empty") << endl;

    integers.push(1);
    integers.push(2);

    cout << "The stack is " << (integers.empty() ? "empty" : "not empty") << endl;
    return 0;
}