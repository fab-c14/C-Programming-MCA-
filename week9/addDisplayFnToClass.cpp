#include<iostream>
using namespace std;
// · Write a program to instantiate the objects of the class person and class complex?
// · Write a C++ program to add member function that displays the contents of class person and class
// complex?
// · Write a C++ program to demonstrate the use of scope resolution operator?
// . Write a program in C++ which creates objects of Student class using default, overloaded and
// copy constructors.
class Person{
  public:
    char *name;
    int age;
    char *address;
    int height,weight;
    void Display(Person p1){
      cout<<"\nthe details of the person p1 are : "
      <<p1.name<<" "<<p1.age<<" "<<p1.address <<" "
      <<p1.height<<" "<<p1.weight;
    }
};
class Complex{
public:
  int real;
  int imaginary;


  void Display(Complex c){
    cout << "The value of complex number is " << c.real << " + " << c.imaginary << "i" << endl;
  };
};

int main(){
  Person p1;
  p1.name = "faisal";
  p1.age = 20;
  p1.address = "anantnag";
  p1.height = 160;
  p1.weight=50;
  p1.Display(p1);


  Complex c1;
  Complex c2;
  c1.real=4;
  c2.real=2;
  c1.imaginary = 6;
  c2.imaginary = 90;
  c1.Display(c1);
  c2.Display(c2);

  return 0;
}
