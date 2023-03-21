#include <stdio.h>

static int n1 = 0, n2 = 1, n3 = 0;

void printFibo(int count)
{
    if (count > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf(" %d", n3);
        printFibo(count - 1);
    }
}

int main()
{
    int count = 15;
    printf("%d %d \n", n1, n2);
    printFibo(count - 2);

    return 0;
}