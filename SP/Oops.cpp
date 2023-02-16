#include<iostream>
using namespace std;


// INHERITANCE
/* To inherit from a class -> we use :(colon) symbol*/


class A {
    public:
    int a;
    void funcA() {
        cout << "funcA" << endl;
    }
};

class B: public A {
    public:
    int b;
    void funcB() {
        cout << "funcB" << endl;
    }
};

// POLYMORPHISM
/* Polymorphism is the ability of an object to take on many forms.
    * The most common use of polymorphism in OOP occurs when a parent class reference is used to refer to a child class object.
    * Any C++ function which uses virtual functions is considered to be using polymorphism.
    * */

class Animal {
    public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog: public Animal {
    public:
    void sound() {
        cout << "Dog sound" << endl;
    }
};

// ABSTRACTION
/* Abstraction is the process of hiding the implementation details and showing only functionality to the user.
    * Abstraction can be achieved with either abstract classes or interfaces.
    * */

class Shape {
    public:
    virtual void draw() = 0;
};

class Rectangle: public Shape {
    public:
    void draw() {
        cout << "Rectangle" << endl;
    }
};
