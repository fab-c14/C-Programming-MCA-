#include<stdio.h>

int main(){
  int arr[] = {1,2,3,4,5,6,7};
  int *p = arr;// storing the address in pointer p(base address)

  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
    printf("address : %u, value : %d\n",p+i, *p+i); // * means print the value at 
  }


  return 0;
}
