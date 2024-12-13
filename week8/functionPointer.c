#include<stdio.h>

int add(int x, int y){
  return x + y;
}
int main(){
  int (*p)(int, int) = add;
  printf("now we can use p at place of add and result will be %d",p(2,3));
  return 0;
}
