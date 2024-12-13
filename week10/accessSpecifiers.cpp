#include<iostream>
using namespace std;

class Student{
public:
  int x=1;
  void Display(){
    cout<<"the value of x is "<<x<<  " y is "<<y<< " and z is "<<z<<endl;
  }
private:
  int y=3;
protected:
  int z=9;
};
int main(){
  Student *s = new Student();
  s->Display();
  // cout<<"value of y is "<<s->y<<endl; // can not access because it is private
  // cout<<"value of z is "<<s->z<<endl; // also can not access this because its protected
  return 0;
}
