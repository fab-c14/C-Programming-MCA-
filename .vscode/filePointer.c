#include<stdio.h>

int main(){

    FILE *ptr;
    ptr = fopen("matrixMul.c","r");
    char c = fgetc(ptr);
    c=fgetc(ptr);
    printf("the contents of a file %c",c);
    fclose(ptr);

    return 0;
}