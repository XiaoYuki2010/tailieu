#include <stdio.h>
int main () {
    int a,b;
    int sum,sub;
    
    printf ("Nhap so thu nhat A =");
    scanf ("%d",&a);

    printf ("Nhap so thu nhat B =");
    scanf ("%d",&b);

    sum = a + b;
    sub = a - b;

    printf ("\nTong a + b = %d",sum);
    printf ("\nHieu a - b = %d",sub);

    return 0;
}