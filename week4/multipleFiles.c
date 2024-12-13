#include<stdio.h>
#include "file1.h"


int main(void){

    simpleFunc();

    printf("\n the result after subtracting 2 from 40 is %d ", sub(40,2));
  

    return 0;
}
// gcc multipleFiles.c file1.c -o file  // command to execute these two files
