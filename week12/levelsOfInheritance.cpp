#include <iostream>

using namespace std;

// Single-level inheritance
class Animal {
public:
    void makeSound() {
        cout << "Generic animal sound\n";
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Meow!\n";
    }
};

// Multi-level inheritance
class A {
public:
    void printA() {
        cout << "Class A\n";
    }
};

class B : public A {
public:
    void printB() {
        cout << "Class B\n";
    }
};

class C : public B {
public:
    void printC() {
        cout << "Class C\n";
    }
};

// Multiple inheritance
class Person {
public:
    string name;
    int age;

    Person(string name, int age){
      this->name=name;
      this->age = age;
    }

    void introduce() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
public:
    string jobTitle;
    int salary;

    Employee(string name, int age, string jobTitle, int salary):Person(name,age){
      this->jobTitle=jobTitle;
      this->salary = salary;
    }

    void displayInfo() {
        cout << "Employee Information:\n";
        introduce();
        cout << "Job Title: " << jobTitle << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Teacher : public Person {
public:
    string subject;

     Teacher(string name, int age, string subject):Person(name,age){
       this->subject=subject;
      }

    void displayInfo() {
        cout << "Teacher Information:\n";
        introduce();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Cat cat;
    cat.makeSound();
    cat.meow();

    C c;
    c.printA();
    c.printB();
    c.printC();

    Employee emp("Faisal", 20, "Software Engineer", 50000);
    emp.displayInfo();

    Teacher teacher("Danish", 25, "Mathematics");
    teacher.displayInfo();

    return 0;
}
