#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<string> languages;
    languages.push("C++");
    languages.push("C");
    languages.push("Java");
    languages.push("Python");

    cout << "Languages in stack => " << languages.top() << endl;
}