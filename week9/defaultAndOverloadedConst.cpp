#include<iostream>
using namespace std;
class Student{
public:
  int rno;
  char *name;
  // Default Constructor
  Student(){
    cout<<"This is Default Constructor"<<endl;
  }
  // Parameterized Constructor
  Student(int r, char* i){
    rno = r;
    name = i;
    cout<<"Parameterized Constructor Called"<<endl;
  }
  // Copy Constructor
  Student(Student& t){
    rno = t.rno;
    name = t.name;
    cout<<"Copy Constructor Called"<<endl;
  }
};
int main(){
  Student c1;
  Student c2(1,"faisal");
  Student c3(c2);


  return 0;
}
