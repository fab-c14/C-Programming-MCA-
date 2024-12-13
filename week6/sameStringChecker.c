#include <stdio.h>
int Check(char *st1, char *st2){
  if(st1==st2){
    return 1;
  }
  return 0;
}
int main(){
  int result = Check("abcd","abcd");
  if(result){
    printf("strings are same(equal)");
  }else{
    printf("strings are not equal");
  }
  return 0;
}
