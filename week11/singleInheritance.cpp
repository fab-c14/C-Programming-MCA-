#include<iostream>

class Person{
protected:
  int a;
};
class Employee:public Person{
protected:
  int b;
};

class Teacher:public Person{
private:
  int c;
};

int main(){
  Person *p =  new Person();
  Person *p1 = new Employee();
  Person *p2 = new Teacher();
  // Person *persons[3] = {p,p1,p2};
  Person *persons[3] = {new Person(), new Employee(), new Teacher()};
  return 0;
}
