// arrays

#include <stdio.h>

// Q1. Write a program to enter price of 3 items & print their final coast with gst
// void calculatePrice();

// int main()
// {
//     printf("Hello from arrays\n\n");
//     calculatePrice();
//     return 0;
// }

// void calculatePrice()
// {
//     float items[3];

//     printf("Enter item 1 price\n");
//     scanf("%f", &items[0]);

//     printf("Enter item 2 price\n");
//     scanf("%f", &items[1]);

//     printf("Enter item 3 price\n");
//     scanf("%f", &items[2]);

//     printf("Final price of item1=%f\n", (items[0] + (items[0] * 0.18)));
//     printf("Final price of item2=%f\n", (items[1] + (items[1] * 0.18)));
//     printf("Final price of item3=%f\n", (items[2] + (items[2] * 0.18)));
// }

// Initialization of array

// void printNumbers(int nums[], int n);

// int main()
// {
//     printf("Initialization of arrays\n\n");
// int marks[] = {100, 200, 300};

// char myCHar = '*';
// char *ptr = &myCHar;
// printf("%u\n", ptr);
// printf("%c\n", *ptr);

// ptr++;
// printf("%u\n", ptr);
// printf("%c\n", *ptr);

// ptr--;
// printf("%u\n", ptr);
// printf("%c\n", *ptr);

// int age = 20;
// int _age = 20;
// int *ptr = &age;
// int *_ptr = &_age;

// printf("%u\n", ptr - _ptr);
// _ptr = &age;
// printf("%u\n", ptr == _ptr);

// Traverse an array
// int adharNo[5];
// int *adharPtr = adharNo;

// for (int i = 0; i < 5; i++)
// {
//     printf("%d index: ", i);
//     scanf("%d", adharPtr + i);
//     continue;
// }

// for (int i = 0; i < 5; i++)
// {
//     printf("%d index, and value is %d \n", i, *(adharPtr + i));
// }

// int marks[] = {1, 4, 5, 6};
// printNumbers(marks, 4);

//     return 0;
// }

// without pointers
// void printNumbers(int nums[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", nums[i]);
//     }
// }

// with pointers
// void printNumbers(int *nums, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", *(nums + i));
//     }
// }

// void countOddNumbers(int *arr, int n);
// void reverseArray(int arr[], int n);
// int main()
// {
// printf("Multidimensional arrays\n\n");

// int arr[2][3]; // _ _ _ | _ _ _

// arr[0][0] = 30;
// arr[0][1] = 20;
// arr[0][2] = 10;

// arr[1][0] = 43;
// arr[1][1] = 22;
// arr[1][2] = 13;

// for (int i = 0; i < 2; i++)
// {
//     printf("marks of %d in sub 1 is %d \n", i, arr[i][0]);
//     printf("marks of %d in sub 2 is %d \n", i, arr[i][1]);
//     printf("marks of %d in sub 3 is %d \n", i, arr[i][2]);
// }

//     int arr[5] = {3, 4, 5, 6 , 7};
//     reverseArray(arr, 5);

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d = %d\n", i, arr[i]);
//     }

//     return 0;
// }

// Q2. Write a function to count the number of odd numbers in an array.
// void countOddNumbers(int *arr, int n)
// {
//     int oddNumbersCount = 0;
//     int eventNumbersCount = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int value = *(arr + i);
//         if (value % 2 != 0)
//         {
//             oddNumbersCount++;
//             continue;
//         }
//         else
//         {
//             eventNumbersCount++;
//             continue;
//         }
//     }

//     printf("odd count %d\n", oddNumbersCount);
//     printf("even count %d", eventNumbersCount);
// }

// void reverseArray(int arr[], int n)
// {
//     for (int i = 0; i < (n / 2); i++)
//     {

//         int temp = arr[i];
//         arr[i] = arr[n - (1 + i)];
//         arr[n - (1 + i)] = temp;
//     }
//     return;
// }

// Q3. Write a program to print first n fibonacci numbers
// void printFibonacci(int n);

// int main()
// {
//     printf("Fibonacci series\n");
//     // int count;
//     // printf("Enter count, to print fibonacci series: ");
//     // scanf("%d", &count);
//     // printFibonacci(count);

//     return 0;
// }

// void printFibonacci(int n)
// {
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         if (i == 0)
//         {
//             arr[i] = 0;
//             continue;
//         }
//         if (i == 1)
//         {
//             arr[i] = 1;
//             continue;
//         }
//         arr[i] = arr[i - 1] + arr[i - 2];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d, ", arr[i]);
//     }
// }

// Q4. Create a 2D array, storing the tables of 2 & 3;
// void printTables(int numbers[], int n);

// int main()
// {
//     printf("Print table in 2D series\n");
//     // int count;
//     // printf("Enter count, to print fibonacci series: ");
//     // scanf("%d", &count);
//     // printFibonacci(count);

    
//     int numbers[] = {2, 3};
//     printTables(numbers, 2);

//     return 0;
// }

// void printTables(int numbers[], int n)
// {
//     int table[n][10];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= 10; j++)
//         {
//             table[i][j] = numbers[i] * j;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("table of %d\n", numbers[i]);
//         for (int j = 1; j <= 10; j++)
//         {
//             printf("\t%d\n", numbers[i] * j);
//         }
//     }
// }