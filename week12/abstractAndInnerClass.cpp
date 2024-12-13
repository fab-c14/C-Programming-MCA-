
// . Write a program in C++ which creates a multiple-inheritance hierarchy of Teacher classes
// derived from both Person, Employee classes. Each class must implement a Show () member
// function and utilize scope-resolution operator.
// . Write a program in C++ demonstrates the concept of function overriding?
// . Write a C++ program to show inheritance using different levels?
// · Write a C++ program to demonstrate the concepts of abstract class and inner class?
#include <iostream>
using namespace std;
class Person {
public:
    virtual void ShowSalary() = 0; 
};

class Employee : public Person {
private:
  int salary=0;

public:
    Employee(int s = 3){
        this->salary = s;
    }

    void ShowSalary() {
        cout << "Salary of employee is " << salary << endl;
    }
};


class Outer {
public:
    int b = 20;

    void ShowOuter() {
        cout << "Value of outer b is " << b << endl;
    }

    class Inner {
    public:
        int a = 40;

        void ShowInner() {
            cout << "Value of inner a is " << a << endl;
        }
    };
};

int main() {
    Outer out;
    out.ShowOuter();


    Outer::Inner in;
    in.ShowInner();

    Employee emp(50000);
    emp.ShowSalary();

    return 0;


    return 0;
}
