#include<stdio.h>

int main(){

    int x;
    printf("enter a number to reverse it : ");
    scanf("%d",&x);
    int temp;
    while(temp=x%10){
        printf("%d",temp);
        x=x/10;
    }

    return 0;
}
