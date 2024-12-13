#include <stdio.h>
#include <string.h>
typedef struct Person {
    int id;
    char name[20];
} Person;


Person* modifyPerson(Person *p, int newId, char *newName) {
    p->id = newId;
    strcpy(p->name, newName);
    return p;
}

void printPerson(const Person *p) {
    printf("Person ID: %d, Person Name: %s\n", p->name, p->name);
}

int main() {
    Person person1 = {1, "Faisal"};
    Person person2 = {2, "Suhail"};
    Person person3;

    person3 = *modifyPerson(&person1, 3, "ABC");

    printPerson(&person1);
    printPerson(&person2);
    printPerson(&person3);

    return 0;
}