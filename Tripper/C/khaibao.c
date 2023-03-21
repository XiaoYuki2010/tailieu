#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct bai_test
{
    int stt;
    char c_hoi[200];
    struct dap_an
    {
        char a_nd[200];
        char b_nd[200];
        char c_nd[200];
        char d_nd[200];
    };
};

void nhap(struct bai_test tn[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d :/", &bt[i + 1].stt);
        xuat(bt[i]);
    }
}

void xuat(struct bai_test bt)
{
    printf("nhap noi dung cau hoi: %s \n", bt.c_hoi);
    scanf("%s", bt.c_hoi);
    printf("nhap dap an \n");
    printf("A: %s \n", bt.a_nd);
    scanf("%s", bt.a_nd);
    printf("B: %s \n", bt.b_nd);
    scanf("%s", bt.b_nd);
    printf("C: %s \n", bt.c_nd);
    scanf("%s", bt.c_nd);
    printf("D: %s \n", bt.d_nd);
    scanf("%s", bt.d_nd);
}

int main()
{
    int n;
    struct bai_test bt[n];
    printf("nhap so luong bai test \n");
    scanf("%d", n);

    int r;
    printf("nhap so luong bai can kiem tra \n");
    scanf("%d", r);

    srand(rand(0));
    for (int i = 0; i < r; i++)
    {
        xuat(bt[i]) = rand() % n;
    }

    return 0;
}