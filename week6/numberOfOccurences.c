#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// Write a program to input name, address and telephone number of 'n' persons (n <= 20). Sort
// according to the name as a primary key and address as the secondary key. Print the sorted
// telephone directory.
// Write a program to find the number of occurrences of a word in a sentence?
// . Write a program to concatenate two strings without using the inbuilt function?
// . Write a program to check if two strings are same or not?
// . Write a program to check whether a string is a palindrome or not?
// . Write a program to find the number of vowels and consonants in a sentence?

int main() {
    char str[100];
    printf("Enter The Sentence : ");
    gets(str);

    char tempStr[strlen(str) + 1];
    strcpy(tempStr, str);

    char *temp;
    char inputStr[100];
    printf("Enter the word to search: \n");
    scanf("%99s", inputStr);
    int count = 0;
    temp = strtok(tempStr, " ");
    while (temp != NULL) {
        int result = strcmp(temp, inputStr);
        if (result == 0) {
            count++;
        }
        temp = strtok(NULL, " ");
    }
    printf("count is: %d\n", count);

    return 0;
}
