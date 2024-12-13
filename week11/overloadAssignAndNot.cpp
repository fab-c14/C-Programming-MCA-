#include <iostream>
using namespace std;


class MyClass {
private:
    int value;

public:

    MyClass(int val) {
        this->value = val;
    }

    bool operator!=(MyClass& other) {
        return this->value != other.value;
    }

    bool operator==(MyClass& other) {
        return this->value == other.value;
    }


    void display() {
        cout << "Value: " << this->value << endl;
    }
};

int main() {
    MyClass obj1(10), obj2(10), obj3(20);

    cout << "Comparing obj1 and obj2: " << (obj1 != obj2 ? "Not Equal" : "Equal") << endl;
    cout << "Comparing obj1 and obj3: " << (obj1 != obj3 ? "Not Equal" : "Equal") << endl;


    cout << "Comparing obj1 and obj2: " << (obj1 == obj2 ? "Equal" : "Not Equal") << endl;
    cout << "Comparing obj1 and obj3: " << (obj1 == obj3 ? "Equal" : "Not Equal") << endl;

    return 0;
}
