#include<iostream>
using namespace std;

// · Write a program to demonstrate the use of different access specifiers.
// . Write a C++ program to demonstrate the use of inline, friend functions and this keyword.
// · Write a C++ program to show the use of destructors.
// · Write a program in C++ demonstrates the use of function overloading.
// . Write a C++ program to overload the '+' operator so that it can add two matrices.

class Student {
  int x = 20;
public:
    Student(int x){
      this->x  = x;
      cout<<"constructor called"<<endl;
    }
    ~Student(){
      cout<<"Destructor called"<<endl;
    }
};


int main(){
  Student *s = new Student(3);// dynamically allocated  so destructor will not be called
  delete s;
  Student s1(4);

}
