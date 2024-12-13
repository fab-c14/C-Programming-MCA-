#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:

    MyClass(int val = 0){
        this->value = val;
    }


    MyClass& operator++() {
        this->value+=1;
        return *this;
    }


    MyClass& operator--() {
        this->value-=1;
        return *this;
    }

    void display()  {
        cout << "Value: " << value << endl;
    }
};

int main() {
    MyClass obj(10);

    cout << "Original value: ";
    obj.display();

    ++obj;
    cout << "After pre-increment (++obj): ";
    obj.display();

    --obj;
    cout << "After pre-decrement (--obj): ";
    obj.display();

    return 0;
}
