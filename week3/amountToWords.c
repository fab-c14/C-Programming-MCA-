#include<stdio.h>

int main(){
    long long int x=132432565;
    int temp=0;
    int count=0;
    while(temp=x%10){
        count++;
        x=x/10;
    }

    switch(count){
            case 1:
                printf("ones");
                break;
            case 2:
                printf("tens");
                break;
            case 3:
                printf("hundreds");
                break;
            case 4:
                printf("thousands");
                break;
            case 5:
                printf("ten thousands");
                break;
            case 6:
                printf("hundred thousands");
                break;
            case 7:
                printf("Millions");
                break;
            case 8:
                printf("Ten Millions");
                break;
            case 9:
                printf("Hundred Million");
                break;
            case 10:
                printf("Billions");
                break;
            case 11:
                printf("Ten Billions");
                break;
            case 12:
                printf("Hundred Billions");
                break;
            case 13:
                printf("Trillions");
                break;
            default:
                printf("nothing");
        }

    return 0;
}
