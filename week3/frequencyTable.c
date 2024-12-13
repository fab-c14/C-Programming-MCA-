#include<stdio.h>


int main(){
    int arr[20];

    for(int i = 0 ; i<20; i++){
        printf("enter the %d number :  ", i+1);
        scanf("%d",&arr[i]);
    }

    for(int j = 0; j<20; j++){
        int count = 0;
        for(int k = 0; k<20; k++){
            if(arr[j] == arr[k]){
                count+=1;
            }
        }
      printf("%d -> %d \n",arr[j],count);
    }

    return 0;
}
