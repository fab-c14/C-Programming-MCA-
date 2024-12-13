#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:

    MyClass(int val = 0){
        this->value = val;
    }


    MyClass& operator=(MyClass& other) {

        this->value = other.value;

        return *this;
    }


    void display() {
        cout << "Value: " << this->value << endl;
    }
};
// . Write a C++ program to overload the assignment operator.
// · Write a C++ program to overload comparison operator operator == and operator! =
// . Write a C++ program to overload the unary operator.
// . Write a program in C++ which ereates a single-inheritance hierarchy of Person, Employee and
// Teacher classes and creates instances of each class using new and stores them in an array of
// Person *

int main() {
    MyClass obj1(42);
    MyClass obj2;

    cout << "Before assignment:" << endl;
    cout << "obj1: ";
    obj1.display();
    cout << "obj2: ";
    obj2.display();

    obj2 = obj1; // Use the overloaded assignment operator

    cout << "\nAfter assignment:" << endl;
    cout << "obj1: ";
    obj1.display();
    cout << "obj2: ";
    obj2.display();

    return 0;
}
