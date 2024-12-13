#include <iostream>
// . Write a C++ program to demonstrate the use of virtual functions and polymorphism?
// . Write a C++ program to demonstrate the use of pure virtual functions and virtual destructors?
//   Write a C++ program to swap data using function templates.
// . Write a C++ program to create a simple calculator which can add, subtract, multiply and divide
// two numbers using class template.

using namespace std;

class Base {
public:
    virtual void print() {
        cout << "Base class\n";
    }
};

class Derived : public Base {
public:
    void print() {
        cout << "Derived class\n";
    }
};

int main() {
    Base *ptr;
    Derived obj;

    ptr = &obj;
    ptr->print();

    return 0;
}
