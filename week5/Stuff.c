#include <stdio.h>
#include <string.h>

void stuff(char *s1, const char *s2, int sp, int rp) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int i=0;
    while(sp<=rp) {
        s1[sp] = s2[i];
        sp++;
        i++;
    }
}

int main() {
    char s1[100] = "abcdefghijklmnop";
    const char s2[] = "1234567";
    int sp = 3;
    int rp = 9;
    stuff(s1, s2, sp, rp);
    printf("Result: %s\n", s1);
    return 0;
}
