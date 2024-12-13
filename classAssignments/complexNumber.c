#include<stdio.h>
typedef struct  Complex
{
    int real;
    int imaginary;
}Complex;

Complex addComplex(Complex x, Complex y){
    
    Complex c;
    c.real = x.real + y.real;
    c.imaginary = x.imaginary + y.imaginary;
    return c;
}

int main(int argc, char const *argv[])
{
    
    Complex x;
    x.real = 1;
    x.imaginary = 2;
    Complex y;
    y.real=2;
    y.imaginary=4;

    printf("first complex number %d + %di \n",x.real,x.imaginary);
    printf("second complex number %d + %di \n",y.real,y.imaginary);
    Complex c = addComplex(x,y);

    printf("after adding first and second complex number is %d + %di \n",c.real,c.imaginary);
    
    
    return 0;
}
