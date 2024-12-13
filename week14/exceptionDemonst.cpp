#include <iostream>
#include <string>
using namespace std;
// . Write a C++ program to demonstrate the concept of exception handling.
// · Write a C++ program to create a custom exception. Define a class with appropriate data members
// and member functions which opens an input and output file, checks each one for being open, and
// then reads name, age, salary of a person from the input file and stores the information in an
// object, increases the salary by a bonus of 10% and then writes the person object to the output
// file. It continues until the input stream is no longer good.

int main() {
    int num1, num2, result;

    try {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        if (num2 == 0) {
            throw 1; // throwing an exception if denom is zero
        }

        result = num1 / num2;
        cout << "Result: " << result << endl;
    } catch (int msg) {
        cerr << "Error: " << msg << endl;
    }

    return 0;
}
