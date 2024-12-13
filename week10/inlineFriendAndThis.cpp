#include <iostream>

using namespace std;

class Student {
private:
    int x = 20;

public:
    friend void printX(Student s);
    void setX(int x){
      this->x = x; //
    }
};

void printX(Student s) {
    cout << "i can access the value of x that is (throught Friend function) " << s.x << endl;
}

inline void sampleInline() {
    cout << "--------------" << endl;
    cout << "do something here" << endl;
    cout << "--------------" << endl;
}

int main() {
    Student s;
    // cout<<"i can not access private variable here "<<s.x<<endl; // because x is private
    printX(s);// but here we can access it with help of friend function
    s.setX(30);
    printX(s);
    sampleInline();


    return 0;
}
