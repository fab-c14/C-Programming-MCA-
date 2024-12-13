#include<iostream>

using namespace std;
void print(char *t){
  cout<<t<<endl;
}
void print(int number){
  cout<<number<<endl;
}
int main(){
  print("abcdef");
  print(343);
  return 0;
}
