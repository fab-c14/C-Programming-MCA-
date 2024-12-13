#include<stdio.h>
void printMatrix(int mat[][3]){
    for(int i = 0; i<sizeof(mat[0])/sizeof(mat[0][0]);i++){
        for(int j = 0; j<sizeof(mat[0])/sizeof(mat[0][0]);j++){
            printf(" %d ",mat[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int arr[][3] =
    { 1,2,3,
      4,5,6,
      7,8,9};
    int arr2[][3] =
    { 1,2,3,
      4,5,6,
      7,8,9};
    int result[][3] = {0};
    int rowSize = sizeof(arr) / sizeof(arr[0]);
    int colSize = sizeof(arr[0]) / sizeof(arr[0][0]);
    printMatrix(arr);
    printf("second matrix : \n");
    printMatrix(arr2);
    printf("addition : \n");
    // add
    for(int i = 0; i<rowSize;i++){
        for(int j = 0; j<colSize;j++){
            printf(" %d ",arr[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
    // multiply
    printf("multiply :\n ");
    for (int i = 0; i < rowSize; i++) {
      for (int j = 0; j < colSize; j++) {
        result[i][j] = 0;
        for (int k = 0; k < colSize; k++)
        {
          result[i][j] += arr[i][k] * arr2[k][j];

        }
          printf(" %d ", result[i][j]);
      }
      printf("\n");
    }
    // transpose
     printf("transpose  :\n ");
    for(int i = 0; i<rowSize;i++){
        for(int j = 0; j<colSize;j++){
            printf(" %d ",arr[j][i]);
        }
        printf("\n");
    }


    return 0;
}
