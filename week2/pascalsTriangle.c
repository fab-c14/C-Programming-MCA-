#include<stdio.h>

int main (){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i =1; i<=n; i++){
        for(int j=n; j>=i; j--){
            printf(" ");
        }
        int l=1;
        for(int k=1 ; k<=i; k++){
            printf(" %d ",l);
            l = l * (i-k) / k; 
        }
        printf("\n");
    }
     
    return 0;
}