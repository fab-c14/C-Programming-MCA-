#include<stdio.h>
// Write a program to demonstrate the use of pointer to a pointer.
// Write a program to demonstrate the use of pointer to a function.
// Write a program to demonstrate the swapping the fields of two structures using pointers?
// Write a program in C++ to define class complex which having two data members viz real and
// imaginary part?
// Write a program in C++ to define class Person which having multiple data members for storing
// the different details of the person e.g. name,age, address, height etc.
typedef struct Complex{
  int r;
  int i;
}Complex;
void swapStruct(Complex *c1, Complex *c2){
  int temp = c1->r; // 1
  c1->r = c2->r; // 4
  c2->r = temp; //1
  int temp2 = c1->i;
  c1->i = c2->i;
  c2->i = temp2;
}
int main(){
  Complex c1 = {1,2};
  Complex c2 = {4,6};
  printf("Before swapping the : \n");
  printf("\nthe first complex number is : %d + %di ", c1.r,c1.i);
  printf("\nthe second complex number is : %d + %di ", c2.r,c2.i);
  printf("\nafter swapping : ");
  swapStruct(&c1, &c2);
  printf("\nthe first complex number is : %d + %di ", c1.r,c1.i);
  printf("\nthe second complex number is : %d + %di ", c2.r,c2.i);





  return 0;
}
