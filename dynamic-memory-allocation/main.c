#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\t Dynamic memory allocation\n\n");

    // float *ptr;
    // ptr = (float *)malloc(5 * sizeof(int));
    // ptr[0] = 0.23;
    // ptr[1] = 1.23;
    // ptr[2] = 2.23;
    // ptr[3] = 3.23;
    // ptr[4] = 4.23;
    // printf("%f\n", ptr[0]);
    // printf("%f\n", ptr[1]);
    // printf("%f\n", ptr[2]);
    // printf("%f\n", ptr[3]);
    // printf("%f\n", ptr[4]);

    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i;
        printf("%d\n", ptr[i]);
    }
    free(ptr);

    ptr = (int *)calloc(2, sizeof(int));
    ptr = realloc(ptr, 1 * sizeof(int));
    for (int i = 0; i < 2; i++)
    {
        ptr[i] = i;
        printf("%d\n", ptr[i]);
    }

    return 0;
}
