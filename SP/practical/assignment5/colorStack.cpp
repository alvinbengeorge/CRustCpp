// RA2211043010017 Alvin Ben George
// EKE - K Section
// Experiment no 5 Stacks
// Program 2 Create a stack of colors and display the top element of the stack, remove green and then display the elements

#include<iostream>
#include<stack>

using namespace std;

int main() {
    stack<string> colors;
    stack<string> temp;
    colors.push("Red");
    colors.push("Orange");
    colors.push("Blue");
    colors.push("Green");

    cout << "\n\nColors in stack => " << endl;
    while (!colors.empty()) {
        string a = colors.top();
        cout << colors.top() << endl;
        colors.pop();
        temp.push(a);
    }

    while (!temp.empty()) {
        colors.push(temp.top());
        temp.pop();
    }

    colors.pop();

    cout << "\n\nColors in stack after removing green => " << endl;
    while (!colors.empty()) {
        temp.push(colors.top());
        cout << colors.top() << endl;
        colors.pop();
    }

}
