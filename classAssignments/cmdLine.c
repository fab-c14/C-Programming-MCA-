#include<stdio.h>
#include<conio.h>
int main(int argc, char* argv[])
{
    printf("You have entered %d arguments:\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    int x = 0;

    x = atoi(argv[1]) + atoi(argv[2]);
    printf("the vlaue of %d",x);

    

    return 0;
}