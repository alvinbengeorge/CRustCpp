// RA2211043010017 Alvin Ben George
// EKE - K Section
// Experiment no 4 Using Classes
// Program 1 Create a class Student with a string variable name and an integer roll no, assign your roll no. and name by creating an object of the file of the class Student and Display them.

#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int rollNo;

    void display() { 
        cout << "Name of the student: " << name << endl;
        cout << "Roll no: " << rollNo <<endl;
    }
};

int main() {
    Student s;
    s.name = "Alvin";
    s.rollNo = 17;
    s.display();
    return 0;
}