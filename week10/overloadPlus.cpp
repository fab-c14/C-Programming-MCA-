#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int data[10][10];

public:

    Matrix(int r, int c) {
        this->rows=r;
        this->cols=c;
    }


    void input() {
        cout << "Enter elements of " << rows << "x" << cols << " matrix:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> data[i][j];
            }
        }
    }

    // Overloading '+' operator
    Matrix operator+(Matrix &m) {
        Matrix result(rows, cols); //creating a new matrix for storing result

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] + m.data[i][j];
            }
        }
        return result;
    }


    void display() {
        cout << "Matrix:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, cols;


    cout << "Enter number of rows and columns for the matrices: ";
    cin >> rows >> cols;


    Matrix mat1(rows, cols), mat2(rows, cols);
    cout << "Matrix 1:\n";
    mat1.input();
    cout << "Matrix 2:\n";
    mat2.input();


    Matrix result = mat1 + mat2;


    cout << "Resultant matrix after addition:\n";
    result.display();

    return 0;
}
