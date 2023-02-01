#include <iostream>
#include <string>
using namespace std;
int main() {
	string str1 = "Your name?";
	string name;
	cout << str1;
	cout << "The length of the the string is : " << str1.length() << "\n";
	cout << str1[3];
	cin >> name;
	cout << "\nYour name is " << name;
	return 0;
}

