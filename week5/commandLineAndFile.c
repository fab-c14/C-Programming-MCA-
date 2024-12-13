#include<stdio.h>


int main(int argc, char const *argv[])
{
    int i = 0;
    FILE *ptr = fopen("file.txt","w+");
    while(i<argc){
        fprintf(ptr,"%s \n",argv[i]); 

        i++;
    }
    fclose(ptr);
    return 0;
}
