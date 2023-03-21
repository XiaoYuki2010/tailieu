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

// ------------------- khai bao ham -------------------

void listTest(struct test a[], int n);
void printTest(struct test a[], int n);
void randomTest(struct test a[], int n, int r, char filename[]);
void saveFile(struct test a[], int n, char filename[]);
void readFile(struct test a[], int n, char filename[]);
void fill_random(struct test a[], int n, int max);

// ------------------- nhap cau hoi -------------------
void listTest(struct test a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("cau so: %d \n", i + 1);
        fflush(stdin);
        printf("nhap cau hoi: \n");
        gets(a[i].c_hoi);
        printf("nhap dap an: \n");
        printf("A: ");
        fflush(stdin);
        gets(a[i].A_ndung);
        printf("B: ");
        fflush(stdin);
        gets(a[i].B_ndung);
        printf("C: ");
        fflush(stdin);
        gets(a[i].C_ndung);
        printf("D: ");
        fflush(stdin);
        gets(a[i].D_ndung);
    }
}

// -------------------in bai test ra mang hinh -------------------
void printTest(struct test a[], int n)
{
    printf("\n-------------- list test ---------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("\ncau hoi so %d : %s \n", i + 1, a[i].c_hoi);
        printf("A: %s \t B: %s \t C: %s \t D: %s", a[i].A_ndung, a[i].B_ndung, a[i].C_ndung, a[i].D_ndung);
    }
}

// -------------------xuat random test-------------------
void fill_random(struct test a[], int n, int r)
{

    for (int i = 0; i < 100; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    srand(rand(0));
    for (int i = 0; i < r; i++)
    {
        a[i] = (rand() % n) + 1;
        ;
        printf("%d cau hoi: %d \n");
    }
}

// --------------------- save file ---------------------
void saveFile(struct test a[], int n, char filename[])
{
    FILE *fpl;
    fpl = fopen(filename, "w+");
    for (int i = 0; i < n; i++)
    {
        fprintf(fpl, "\ncau hoi so %d : %s \n", i + 1, a[i].c_hoi);
        fprintf(fpl, "A: %s \t B: %s \t C: %s \t D: %s", a[i].A_ndung, a[i].B_ndung, a[i].C_ndung, a[i].D_ndung);
    }

    fclose(fpl);
}

// --------------------- read file ---------------------
void readFile(struct test a[], int n, char filename[])
{
    FILE *fpl;
    fpl = fopen(filename, "r");
    char ch;
    while ((ch = fgetc(fpl)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fpl);
}
// ------------------- copy past file --------------------
void copyTest(struct test a[], int n)
{
    int s_cau;
    char c_hoi[1000];
    //-- dap an --//
    char A_ndung[1000];
    char B_ndung[1000];
    char C_ndung[1000];
    char D_ndung[1000];

    char c, ch;
    FILE *fpl1 = fopen("listTest.txt", "r");
    while (fscanf(fpl1, "\n%d n_ch%s \n A:A_ndung %s \t B:B_ndung %s \t C:C_ndung %s \t D:D_ndung %s", &s_cau, c_hoi, A_ndung, B_ndung, C_ndung, D_ndung) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d %s \n %s \t %s \t %s \t %s", &a->s_cau, &a->c_hoi, &a->A_ndung, &a->B_ndung, &a->C_ndung, &a->D_ndung);
        }
    }

    FILE *fpl = fopen("test.txt", "a+");

    char str[500];
    if (fpl == NULL)
    {
        printf("Could not open file");
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(fpl, "cau hoi: %d - n_ch %s \n A:  %s \t B:  %s \t C: %s \t D: %s", i, &s_cau, c_hoi, A_ndung, B_ndung, C_ndung, D_ndung);
    }
    fclose(fpl);
    fclose(fpl1);
}

// ------------------- khoi tao main ----------------------
int main()
{

    char filename[] = "test.txt";
    struct test a[100];
    int n;

    printf("\n <<------->> create list quizs choise <<-------->> \n");

    // ---- make menu choise --- //

    int key;

    do
    {
        printf("\n \n");
        printf("     <>------- menu choice -----------<>\n");
        printf("     <>-----1/: nhap du lieu cau hoi--<>\n");
        printf("     <>-----2/: hien danh sach cau hoi<>\n");
        printf("     <>-----3/: lam bai test ---------<>\n");
        printf("     <>-----4/:-copy file copy--------<>\n");
        printf("     <>---------nhap lua chon---------<>\n");
        fflush(stdin);
        scanf("%d", &key);
        printf("\n <<------->> create list quizs choise <<-------->> \n");
        switch (key)
        {
        case 1:
            printf("\n<>--------- nhap du lieu cau hoi -----<>\n");
            printf("nhap so cau hoi: \n");
            scanf("%d", &n);
            listTest(a, n);
            printTest(a, n);
            saveFile(a, n, filename);
            printf("\n <<------->> --------------- <<-------->> \n");
            break;
        case 2:
            printf("\n <<------->> create list quizs choise <<-------->> \n");
            printf("\n<>--------- danh sach cau hoi -----<>\n");
            readFile(a, n, filename);
            printf("\n <<------->> --------------- <<-------->> \n");
            break;
        case 3:
            printf("\n <<------->> create list quizs choise <<-------->> \n");
            printf("\n<>--------- lam bai kiem tra -----<>\n");
            int r;
            printf("random test: \n");
            scanf("%d", r);
            randomTest(a, n, r, filename);
            printf("\n <<------->> --------------- <<-------->> \n");
            break;
        case 4:
            printf("\n <<------->> create list quizs choise <<-------->> \n");
            printf("\n<>--------- file copy file -----<>\n");
            copyTest(a, n);
            printf("\n <<------->> --------------- <<-------->> \n");
            break;
        default:
            printf("\n<>----- end test -----<>\n");
            break;
        }
    } while (key != '0');

    return 1;
}
