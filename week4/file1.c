#include <stdio.h>
#include "file1.h"

void simpleFunc() {
    printf("this line is inside the file2 , the value of static y is %d and the value of extern x is %d ",y,x);
    return;
}

int sub(int x, int y){
  return x - y;
}
