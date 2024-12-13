#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverseString(char* st) {
    char temp;
    int len = strlen(st);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        temp = st[i];
        st[i] = st[j];
        st[j] = temp;
    }
    return st;
}

int main() {
    char str[] = "123334221";
    char copyStr[strlen(str) + 1];
    strcpy(copyStr, str);
    char* str2 = reverseString(copyStr);

    printf("the reverse of %s string is %s\n",copyStr,str);


    if (strcmp(str, str2) == 0) {
        printf("\n%s is a palindrome string\n", str);
    } else {
        printf("\n%s is not a palindrome string\n", str);
    }

    return 0;
}
