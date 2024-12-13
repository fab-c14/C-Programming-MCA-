#include<stdio.h>
#include<stdlib.h>
typedef struct  Student{
    char *name;
    int age;
    int roll_no;
} Student;


void printValues(Student *s1){
   printf("\n%s is %d years old , and has roll no %d",s1->name,s1->age,s1->roll_no);
}

int main(){
    Student *s = malloc(sizeof(struct Student) * 5);
    s[0].name = "faisal";
    s[0].age = 20;
    s[0].roll_no = 11;

    s[1].name = "suhail";
    s[1].age = 20;
    s[1].roll_no = 04;
    printValues(&s[0]);
    printValues(&s[1]);
    free(&s[0]);
    printValues(&s[0]);
    printValues(&s[1]);
    free(s);

    return 0;
}
