#include <stdio.h>

#define X 5
#define ADD(d,y) (d+y)
// macro is a piece of code which is copy pased by compiler
// 1) Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code.
// we can have pointer to multipel functions

void add(int a, int b) {
    printf("Addition is %d\n", a + b);
}

void sub(int a, int b) {
    printf("Subtraction is %d\n", a - b);
}

void mul(int a, int b) {
    printf("Multiplication is %d\n", a * b);
}

struct XYZ{

  int x;
  int y;
};
void abc(){
  return;
}
int main(){
  // auto int a; // auto storage class.
  extern int x; // external, global usage storage class.
  static int y; // static ,storage class.
  register char p='A'; // register storage class.
  printf("%d",ADD(2,5));
  void (*fptrArr[])(int, int)
        = { add, sub, mul };
        fptrArr[0](2,3);
        abc();
  return 0;
}
