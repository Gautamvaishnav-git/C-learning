#include <stdio.h>

// int main()
// {
//     int price = 100;
//     int *ptr = &price;
//     int **pptr = &ptr;
//     printf("%p\n", ptr);
//     printf("%d", **pptr);

//     return 0;
// }

// call by value
// void square(int n);

// call by reference
// void _square(int *n);

// int main()
// {
//     // int side = 16;
//     // // square(side);
//     // _square(&side);
//     // printf("%d\n", side);

//     // return 0;
// }

// void square(int n)
// {
//     n = n * n;
//     printf("square = %d\n", n);
//     return;
// }

// void _square(int *n)
// {
//     *n = (*n) * (*n);
//     printf("square = %d\n", *n);
//     return;
// }

// Q1. swap two numbers

// void swap(int *a, int *b);

// int main()
// {
//     int a = 10;
//     int b = 20;
//     printf("%d a \n", a);
//     printf("%d b \n", b);
//     swap(&a, &b);
//     printf("%d a \n", a);
//     printf("%d b \n", b);

//     return 0;
// }

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     return;
// }

// Q2. calculate sum, avg and product of two numbers
// void calculator(int a, int b, int *avg, int *sum, int *prod);

// int main()
// {
//     int a = 10, b = 20;
//     int avg, sum, prod;

//     calculator(a, b, &avg, &sum, &prod);
//     printf("sum = %d, avg=%d and prod = %d\n", sum, avg, prod);
    
//     return 0;
// }

// void calculator(int a, int b, int *avg, int *sum, int *prod)
// {
//     *avg = (a + b) / 2;
//     *sum = (a + b);
//     *prod = (a * b);
//     return;
// }