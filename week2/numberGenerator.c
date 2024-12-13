#include<stdio.h>


int main(){
    int n;
    printf("Enter to limit to generate numbers : ");

    scanf("%d",&n);
    printf("Ascending Order : ");
    for(int i =0; i<=n; i++){
        printf(" %d ",i);
    }
    printf("\nDescending Order : ");
    for(int j=n; j>=0; j--){
        printf(" %d ",j);
    }

    return 0;
}
