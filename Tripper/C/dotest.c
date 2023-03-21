#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct bai_test
{
    int id;
    char c_hoi[200];
    char A_nd[200];
    char B_nd[200];
    char C_nd[200];
    char D_nd[200];
};

void readFile(struct bai_test a[], FILE *fpl)
{
    for (int i = 0; i < 200; i++)
    {
        fprintf(fpl, "%d", a[i + 1].id);
        writeFile(a, fpl);
    }
}

void writeFile(struct bai_test &a)
{
    fprintf("nhap cau hoi", a.c_hoi);
    gets(a.A_nd);
    gets(a.B_nd);
    gets(a.C_nd);
    gets(a.D_nd);
}

int main()
{
    FILE *fpl;
    fpl = fopen("test.txt", "r");
    if (fpl == NULL)
    {
        printf("Failed to open test.txt\n");
        return -1;
    }

    fclose(fpl);
}