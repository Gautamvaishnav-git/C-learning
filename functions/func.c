#include <stdio.h>

// Other functions topic will be written here

// recursion functions
// void printW(int count);
// int sumOfN(int n);
// int factorial(int n);
// float fahrenheit(float celsius);
int fibonacci(int n);

int main()
{
    // printW(4);
    // printf("%d", sumOfN(5));
    // printf("%d", factorial(6));
    // printf("%f", fahrenheit(37));
    int n = 6;

    printf("%d\n", fibonacci(n));

    return 0;
}

// Q1. Print "Hello world" 5 times without using loops

// void printW(int count)
// {
//     printf("hello world %d\n", count);
//     if (count > 0)
//     {
//         printW(count-1);
//     }
// }

// Q2. Write a function that prints the some of "n" natural numbers
// int sumOfN(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     int sumNm1 = sumOfN(n - 1);
//     int sumN = sumNm1 + n;
//     return sumN;
// }

// Q3. Factorial of n
// int factorial(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     // we know that factorial of n! = n * (n-1)!
//     int factorial1 = factorial(n - 1);
//     int factorialOfN = n * factorial1;
//     return factorialOfN;
// }

// Q4. write a program to convert celsius to fahrenheit
// Formula f = (C * 9/5) + 32
// float fahrenheit(float celsius)
// {
//     return (celsius * (9.0 / 5.0)) + 32;
// }

// Q5. Write a function to print n terms of fibonacci sequence
// The Fibonacci sequence is a sequence in which each number is the sum of the two preceding ones.
// Series -> 0, 1, 1, 2, 3, 5, 8, 13...
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fib1 = fibonacci(n - 1);
    int fib2 = fibonacci(n - 2);
    return fib1 + fib2;
}
