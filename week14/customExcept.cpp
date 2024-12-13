#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;
    double salary;
    Person(string n, int a, double s) {
        name = n;
        age = a;
        salary = s;
    }
};

class FileException : public exception {
public:
    string what() throw() {
        return "File not found or could not be opened.";
    }
};

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile.is_open() || !outputFile.is_open()) {
        throw FileException();
    }

    string name;
    int age;
    double salary;

    while (inputFile >> name >> age >> salary) {
        Person person(name, age, salary);
        person.salary *= 1.1;

        outputFile << person.name << " " << person.age << " " << person.salary << endl;
    } // this is a comment
    inputFile.close();
    outputFile.close();

    return 0;
}
