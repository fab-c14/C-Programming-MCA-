#include <stdio.h>

int main() {
    int x = 123;
    int *p = &x;
    printf("the address of pointer is %u and the value is %d\n", p, *p);
    int **p1 = &p;
    printf("\nthe address of pointer to pointer(p) is %u and value is %d and modified value is %d\n", *p1, **p1, *p);

    // Modify the value of x through p1
    **p1 = 124;

    printf("The modified value of x is: %d\n", x);

    return 0;
}