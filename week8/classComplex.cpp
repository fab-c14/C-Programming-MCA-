#include<iostream>
using namespace std;


class Complex{
public:
  int real;
  int imaginary;
};
int main(){
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
