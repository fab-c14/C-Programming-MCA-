#include<iostream>
using namespace std;
class Person{
protected:
  int a=78;
public:
  void Show(){
    cout<<"the value of a(Person Class) is "<<a<<endl;
  }
};


class Employee{
protected:
  int b=12;
public:
  void Show(){
    cout<<"the value of b(Employee class) is "<<b<<endl;
  }
};



class Teacher:public Person,public Employee{
private:
  int c =90;
public:
  void Show(){
    cout<<"the vlaue of c(Teacher class) is"<<c<<endl;
  }

};

int main(){

  Employee e1;
  e1.Show();
  Person *p = new Teacher();
  p->Show(); // here person classes show function is called

  return 0;
}
