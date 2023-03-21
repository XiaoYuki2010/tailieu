#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

struct test
{
    int s_cau;
    char c_hoi[1000];
    //-- dap an --//
    char A_ndung[1000];
    char B_ndung[1000];
    char C_ndung[1000];
    char D_ndung[1000];
};
typedef struct Test test;

// khai bao ham
void inTest(test &test);
void outTest(test test);
void inputTest(test a[], int n);
void outputTest(test a[], int n);
void saveTest(test a[], int n, char *filename);
void loadTest(test a[], int n, char *filename);
void numranTest(int n, int r, int num);
void randomTest(test a[], int n, int r, char *filename);

// xay dung ham
void outTest(test &Ts) // nhap bai test
{
    printf("Nhap cau hoi: ");
    fflush(stdin);
    gets(Ts.c_hoi);
    printf("Nhap dap an: ");
    printf("A: ");
    gets(Ts.A_ndung);
    printf("B: ");
    gets(Ts.B_ndung);
    printf("C: ");
    gets(Ts.C_ndung);
    printf("D: ");
    gets(Ts.D_ndung);
}

void outputTest(struct test a[], int n) // in bai test
{
    for (int i = 0; i < n; i++)
    {
        printf("%d:/ %s \n", i + 1, a.c_hoi);
        printf("A: %s \t B: %s \t C: \t D: \n", a.A_ndung, a.B_ndung, a.C_ndung, a.D_ndung);
        inputTest(a[i]);
    }
}

void saveTest(struct test a[], int n, char *filename) // nhap danh sach cau hoi
{
    FILE *fpl;
    fpl = fopen(filename, "w+");

    for (int i = 0; i < n; i++)
    {
        fprintf(fpl, "%d:/ %s\nA: %s \t B: %s \t C: \t D: \n", i + 1, a[i].c_hoi, a[i].A_ndung, a[i].B_ndung, a[i].C_ndung, a[i].D_ndung);
    }
    fclose(fpl);
}

void loadTest(struct test a[], int n, char *filename)
{
    FILE *fpl;
    fpl = fopen(filename, "r"); // xuat danh sach cau hoi
    for (int i = 0; i < n; i++)
    {
        fscanf(fpl, "%d:/ %s\nA: %s \t B: %s \t C: \t D: \n", i + 1, a[i].c_hoi, a[i].A_ndung, a[i].B_ndung, a[i].C_ndung, a[i].D_ndung);
    }
    fclose(fpl);
}

void numranTest(int n, int r, int num)
{
    srand(time(0));
    for (int i = 0; i < r; i++)
    {
        num = (rand() % n) + 1;
    }
}

void randomTest(struct test a[], int n, int num, char *filename)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = a[num];
        printf("%d:/ %s \n", i + 1, a[num].c_hoi);
        printf("A: %s \t B: %s \t C: %s \t D: %s \n", a[num].A_ndung, a[num].B_ndung, a[num].C_ndung, a[num].D_ndung);
    }
}

int main()
{
    char filename[] = "test1.txt"; // dia chi file

    int n; // so luong cau hoi
    struct test a[n];

    bool inputTest = false;
    int key, r, num;
    do
    {
        printf("<>..........nhap so luong cau hoi.....<>\n")
            scanf("%d", &n);
    } while (n > 0);
    {
        printf("\n..........<.>..........Testing....................\n");
        printf("\n..........<.>..........Testing....................\n");
        printf("<.>..........1:/ nhap danh sach cau hoi..........<.>\n");
        printf("<.>..........2:/ danh sach cau hoi...............<.>\n");
        printf("<.>..........3:/ lam bai kiem tra................<.>\n");
        printf("..llll......<.>..........Testing....................\n");
        printf("............<.>..........Testing....................\n");
        printf("....................................................\n");
        scanf("%d", &key);
        switch (key)
        {
        case 1:
            printf("\n<.>.................................<.>\n");
            printf("<.>......nhap danh sach cau hoi.......<.>\n");
            printf("<.>.........%d nhap cau hoi........<.>\n", n);
            scanf("%d", &n);
            inputTest(a, n);
            outputTest(a, n);
            printf("<.>...................................<.>\n");
            break;
        case 2:
            printf("\n<.>.................................<.>\n");
            printf("danh sach cau hoi");
            loadTest(a, n, filename);
            printf("\n<.>.................................<.>\n");
            break;
        case 3:
            printf("<.>...................................<.>\n");
            printf("<.>..........lam bai kiem tra.........<.>\n");
            printf("<.>..........nhap so %d cau hoi....<.>\n", r);
            scanf("%d", &r);
            randomTest(a, n, num, filename);
            printf("<.>...................................<.>\n");
        case 4:
            break;
        default:
            break;
        }
    }
    while (key != '0')
        ;
    return 0;
}
