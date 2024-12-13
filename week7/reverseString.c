#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// · Write a program that reverse the contents of a string.
// . Write a program to demonstrate the array indexing using pointers.
// · Write a program to pass a pointer to a structure as a parameter to a function and return back a
// pointer to structure to the calling function after modifying the members of the structure?

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
    char str[] = "hello";
    char copyStr[strlen(str) + 1];
    strcpy(copyStr, str);
    char* str2 = reverseString(copyStr);

    printf("the reverse of %s string is %s\n",str,str2);




    return 0;
}
