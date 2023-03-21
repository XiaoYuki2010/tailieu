#include <stdio.h>

int b = 0;

int abc(int b)
{
    if (b >= 0 && b <= 100)
    {
        printf("5 *%d = %d \n", b, 5 * b);
        return abc(b + 1);
    }
    if (b<0, b = 5, b> 0)
        return 0;
}

int main()
{
    abc(1);
    return 0;
}