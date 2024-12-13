#include<stdio.h>
#include<conio.h>
int main(){

    // getch

    char c;
    // printf("%c",getch());
    // int x;

    // use of scanf
    // scanf("%d",&x);
    // printf("the value of %d",x);

    // use of getchar
    // c = getchar();
    // printf("%c",c);

    // input a string // use of gets and puts
    char str[20];
    // printf("%s",gets(str)); // input a string
    printf("Enter a string : ");
    gets(str);
    puts(str);

    return 0;
}
