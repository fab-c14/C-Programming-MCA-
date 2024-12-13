#include <iostream>

using namespace std;

class Shape {
public:
    virtual void draw() = 0; 

    virtual ~Shape() {
        cout << "Shape destructor\n";
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle\n";
    }
};

int main() {
    Shape *ptr = new Circle();
    ptr->draw();
    delete ptr; // deleting at runtime

    return 0;
}
