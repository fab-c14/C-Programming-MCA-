#include <iostream>
using namespace std;

template <typename T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;
    cout << "before swap " << endl
         << "x : " << x << " y : " << y << endl;
    double a = 3.14;
    double b = 2.718;
     cout << "before swap " << endl
         << "a : " << a << " b : " << b << endl;

    mySwap(x, y);
    mySwap(a, b);
    cout << "after swapping : " << endl;

    cout << "x = " << x << ", y = " << y << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
