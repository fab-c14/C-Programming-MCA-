#include <iostream>

using namespace std;

template <typename T>
class Calculator {
public:
    T num1, num2;

    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }

    T multiply() {
        return num1 * num2;
    }

    T divide() {
        if (num2 == 0) {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
        return num1 / num2;
    }
};

int main() {
    int choice;
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Calculator<double> calc(num1, num2);

    do {
        cout << "\nChoose an operation:\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Sum: " << calc.add() << endl;
                break;
            case 2:
                cout << "Result : " << calc.subtract() << endl;
                break;
            case 3:
                cout << "Result : " << calc.multiply() << endl;
                break;
            case 4:
                cout << "Result : " << calc.divide() << endl;
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again"<<endl;
        }
    } while (choice != 5);

    return 0;
}