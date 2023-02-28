#include <stdio.h>// Thư viện library

int main(){     
    float a;
    float b;
    Comback:
    printf("=======================\n"); 
    printf("= 1: Tinh Tong hai so =\n"); 
    printf("= 2: Tinh Hieu hai so =\n"); 
    printf("= 3: Tinh Nhan hai so =\n"); 
    printf("= 4: Tinh Chia hai so =\n"); 
    printf("=======================\n"); 

    int select;
    printf("Chon: "); 
    scanf("%d", &select);
    switch (select)
    {
        case 1:
            printf("Nhap so A: "); scanf("%f", &a);
            printf("Nhap so B: "); scanf("%f", &b);
            printf("Ket qua A + B = %f", a + b);
        break;
        case 2:
            printf("Nhap so A: "); scanf("%f", &a);
            printf("Nhap so B: "); scanf("%f", &b);
            printf("Ket qua A - B = %f", a - b);
        break;
        case 3:
            printf("Nhap so A: "); scanf("%f", &a);
            printf("Nhap so B: "); scanf("%f", &b);
            printf("Ket qua A x B = %f", a * b);
        break;
        case 4:
            printf("Nhap so A: "); scanf("%f", &a);
            b:printf("Nhap so B: "); scanf("%f", &b);
            if (b > 0)
                printf("Ket qua A : B = %f", a / b);
            else
                goto b;
        break;
    default:
        printf("Vui long chon lai");
        goto Comback;
        break;
    }
    return 0;// kết quả trả về
}