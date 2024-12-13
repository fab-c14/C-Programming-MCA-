#include<iostream>
using namespace std;
class Person{
public:
  char *name;
  int age;
  char *address;
  int height,weight;
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

  return 0;
}
