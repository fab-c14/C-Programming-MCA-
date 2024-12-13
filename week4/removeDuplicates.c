#include<stdio.h>
int removeDuplicates(int * arr, int n){
  for(int i = 0; i<n; i++){
      int x = arr[i];
      for(int j=i+1; j<n;j++){
          if(arr[j] == x){
             for(int k = j; k<n; k++){
                  arr[k] = arr[k + 1];
             }
             n--;
          }
      }

  }
  return n;
}
int main(){
     int arr[] = {1,1,2,2,3,4,4,5,6};
     int n = sizeof(arr)/sizeof(arr[0]);
     printf("Before Removing Duplicates : ");
     for(int i=0; i<n;i++){
        printf(" %d ",arr[i]);
     }
     n = removeDuplicates(arr,n);
     printf("After Removing Duplicates : ");
     for(int i=0; i<n;i++){
        printf(" %d ",arr[i]);
     }
    return 0;
}
