#include <stdio.h>
int main () {
    int a;
    int b;

    printf ("Nhap A :"); scanf ("%d", &a);
    printf ("Nhap B :"); scanf ("%d", &b);
    printf ("Tong A + B = %d\n", a + b);
    printf ("Hieu A - B = %d\n", a - b);
    printf ("Tich A x B = %d\n", a * b);
    printf ("Thuong A : B = %d\n", a / b);

    return 0;
}