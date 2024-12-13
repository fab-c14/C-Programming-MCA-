#include<stdio.h>

int main(){
    int mat[3][3]={0};
    int temp[3][3]={0};
    int i,j=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the %d %d number : ",i,j);
            scanf("%d",&mat[i][j]);
        }
       
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",mat[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
          temp[i][j]=mat[j][i];
        }
    }
   
    printf("Transpose of matrix is : \n");
 
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",temp[i][j]);
        }
        printf("\n");
    }
    return 0;
}