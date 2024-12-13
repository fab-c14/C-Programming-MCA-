#include<iostream>
using namespace std;
class Person{
  public:
    char *name;
    int age;
    char *address;
    int height,weight;
};
class Complex{
public:
  int real;
  int imaginary;
};
int main(){
  Person p1;
  p1.name ="faisal";
  p1.age = 20;
  p1.address = "anantnag";
  p1.height = 160;
  p1.weight=50;
  cout<<"the details of the person p1 are : "
  <<p1.name<<" "<<p1.age<<" "<<p1.address <<" "
  <<p1.height<<" "<<p1.weight;


  Complex c1;
  Complex c2;
  c1.real=4;
  c2.real=2;
  c1.imaginary = 6;
  c2.imaginary = 90;
  cout<<"the first complex number is "<<c1.real<<"+"<<" "<<c1.imaginary<<"i"<<endl;
  cout<<"the second complex number is "<<c2.real<<"+"<<" "<<c2.imaginary<<"i"<<endl;
  return 0;
}
