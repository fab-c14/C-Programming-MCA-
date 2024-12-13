// C program for writing
// struct to file
#include <stdio.h>
#include <stdlib.h>

// a struct to be read and written
struct Date {
    int day;
    int month;
    int year;
};

int main()
{
    FILE* outfile;

    // open file for writing
    outfile = fopen("Date.txt", "w");
    if (outfile == NULL) {
       
        exit(1);
    }

    struct Date input1 = { 1,1,2024};

    // write struct to file
    int flag = 0;
    flag = fwrite(&input1, sizeof(struct Date), 1,
                  outfile);
    if (flag) {
        printf("Contents of the structure written "
               "successfully");
    }
    else
        printf("Error Writing to File!");

    // close file
    fclose(outfile);

    return 0;
}
