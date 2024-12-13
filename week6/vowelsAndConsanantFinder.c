#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
  char str[] = "abcdefghijI";

  int consonantCount,vowelCount=0;

  for(int i= 0; i<strlen(str); i++){
    char lower = tolower(str[i]);
    if(lower=='a'
    || lower == 'e'
    || lower == 'i'
    || lower =='o'
    || lower =='u'){
      vowelCount++;
    }
    else{
      consonantCount++;
    }
  }
  printf("the number of vowels in string is %d\n and the consonant count is %d\n",vowelCount,consonantCount);
  return 0;
}
