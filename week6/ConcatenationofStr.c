#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abcdefg";
    char str2[] = "12345";

    printf("First string is: %s\n", str);
    printf("Second string is: %s\n", str2);

    int x = strlen(str);
    int y = strlen(str2);
    char str3[x+y+1];

    int i = 0;
    while (i < x) {
        str3[i] = str[i];
        i++;
    }

    int j = 0;
    while (i < (x + y)) {
        str3[i] = str2[j];
        i++;
        j++;
    }
    str3[i] = '\0';
    printf("The concatenation of strings is: %s\n", str3);

    return 0;
}
