#include <stdio.h>

int main () 
{
    int a[6] = {67,3,9,2,34,5};
    int i, j, temp, p;
    
    // khai bao bien !!
    for ( i = 0; i < 6; i++)
    {
        printf ("\n bien so a[%d] la: %d\n", i, a[i]);
    }
    comback:
    // lua chon sap xep bien
    printf ("\n<==================> \n");
    printf ("= 1: bien tang dan : = \n");
    printf ("= 2: bien giam dan : = \n");
    printf (" <===================>  \n");

    int select;
    printf ("lua chon: ");
    scanf ("%d", &select);
    switch (select)
    {
        case 1:
              // dieu kien khai bao bien: tang dan
            for (i = 0 ; i < 6 - 1 ; i++) {
                for ( j = i; j < 6; j++) {
                    if (a[i] > a[j]) {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            // xuat lai bien

            printf ("\n Bien thay doi thanh: \n");
            for ( i = 0; i < 6; i++)
            {
                printf ("%4d", a[i]);
            }
        break;

        case 2:
                    // dieu kien khai bao bien: giam dan

            for (i = 0 ; i < 6 - 1 ; i++) {
                for ( j = i; j < 6; j++) {
                    if (a[i] < a[j]) {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            // xuat lai bien
            printf ("\n Bien thay doi thanh: \n");
            for ( i = 0; i < 6; i++)
            {
                printf ("%4d", a[i]);
            }
        break;
        
    default:
        break;
    }
    goto comback;
    return 0;

}