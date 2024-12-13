#include <stdio.h>
#include <string.h>


typedef struct Person {
    char name[50];
    char address[100];
    char phone[20];
} Person;

// Function to compare two persons based on name and address
int comparePersons(Person *p1, Person *p2) {
    int nameCmp = strcmp(p1->name, p2->name);
    if (nameCmp != 0) {
        return nameCmp;// if name is different sort them by name ,  
        // note that we are sorting by name
    }

}


void swap(Person *a, Person *b) {
    Person temp = *a; 
    *a = *b;
    *b = temp;
    // swap two persons using same logic
} 

int main() {
    // Define the list of persons
    Person persons[] = {
        {"Asif", "Srinagar", "1234567890"},
        {"Insha", "Kupwara", "2468013579"},
        {"Javaid", "Pulwama", "9087654321"},
        {"Bilal", "Anantnag", "9876543210"},
        {"Faisal", "Anantnag", "1357924680"}
    };

    int n = sizeof(persons) / sizeof(persons[0]); 


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (comparePersons(&persons[j], &persons[j + 1]) > 0) {
                swap(&persons[j], &persons[j + 1]);
            }
        }
    }

 
    printf("\n The Sorted Telephone Directory:\n");
    for (int i = 0; i < n; ++i) {
        printf("Name: %s\n", persons[i].name);
        printf("Address: %s\n", persons[i].address);
        printf("Phone number: %s\n\n", persons[i].phone);
    }

    return 0;
}
