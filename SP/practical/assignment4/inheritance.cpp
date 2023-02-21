// RA2211043010017 Alvin Ben George
// EKE - K Section
// Experiment no 4 Using Classes
// Program 1 Create a class Student with a string variable name and an integer roll no, assign your roll no. and name by creating an object of the file of the class Student and Display them.

#include<iostream>
using namespace std;

class Mammals {
    public:
    void displayMammal() { cout << "I am mammal" << endl;}
};

class MarineAnimals {
    public:
    void displayMarine() { cout << "I am a marine" << endl;}
};

class blueWhale: public Mammals, public MarineAnimals {
    public:
    void displayBlue() { cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;}
};

int main() {
    Mammals a;
    MarineAnimals b;
    blueWhale c;

    a.displayMammal();
    b.displayMarine();
    c.displayBlue();
    c.displayMammal();
    c.displayMarine();
}