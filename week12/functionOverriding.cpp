#include<iostream>
using namespace std;
class Person{
protected:
  int a;
public:
  virtual void Show(){
    cout<<"Person Class(parent class) Show function"<<endl;
  }
};
class Employee{
protected:
  int b;
public:
  void Show(){
    cout<<"Employee class Virtual Function"<<endl;
  }
};
class Teacher{
protected:
  int c;
public:
  void Show(){
    
  }
};

int main(){
  Employee e1;
  e1.Show();
  return 0;
}
