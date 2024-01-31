#include <stdio.h>

int addN(int n);

int main()
{
    int num;
    int *ptr = &num;
    *ptr = 10;
    printf("%d\n", *ptr);

    return 0;
}

int addN(int n)
{
    return n + 2;
}