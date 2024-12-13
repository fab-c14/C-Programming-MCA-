#include<stdio.h>

int main(){

    int arr[] = {10,-15,20,-4,-3,-1,4,-3,20,8,12};
    int temp=0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n; i++){
          for(int j=i+1; j<n;j++){
              if(arr[i]<arr[j]){
                    temp  = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
     for(int i=0; i<n; i++){
        printf(" %d ",arr[i]);
    }

    return 0;
}
