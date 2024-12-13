#include<stdio.h>
typedef struct  Student{
    char *name;
    int age;
    int roll_no;
} Student;

Student * setValues(Student *s1,int age, char *name,int roll_no){
    s1->age = age;
    s1->name = name;
    s1->roll_no = roll_no;
    return s1;
}

void printValues(Student *s1){
   printf("%s is %d years old , and has roll no %d",s1->name,s1->age,s1->roll_no);

}
int main(){
    Student s1;
    setValues(&s1,20,"faisal",11);
    printValues(&s1);
    return 0;
}
