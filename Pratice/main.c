#include <stdio.h>
#include <string.h>

// function for questions
// void calculatePerimeter();
// void printCube();
// void printAvgOfThree();
// void isDigit();
// void findSmallest();
// void salt(char password[]);
// void slice(char str[], int from, int to);
// void countVowel(char str[]);

int main()
{
    // calculatePerimeter();
    // printCube();
    // printAvgOfThree();
    // isDigit();
    // findSmallest();

    // salt test
    // char password[100];
    // scanf("%s", password);
    // salt(password);
    // slice("gautam", 0, 6);
    // countVowel("GK");

    return 0;
}

// Q1. Write a program to calculate perimeter of rectangle.
// Take sides, a & b, from the user.
// void calculatePerimeter()
// {
//     float width, length;
//     printf("Enter width of rectangle: ");
//     scanf("%f", &width);
//     printf("Enter length of rectangle: ");
//     scanf("%f", &length);
//     printf("Perimeter of rectangle is %f", width * length);
// }

// Q2 Take a number(n) from user & output its cube(n*n*n)
// void printCube()
// {
//     int n;
//     printf("Enter n ");
//     scanf("%d", &n);
//     printf("Perimeter of rectangle is %d", n * n * n);
// }

// Q3. Write a program to print the average of 3 numbers.
// void printAvgOfThree()
// {
//     int a, b, c;
//     printf("Enter a: ");
//     scanf("%d", &a);
//     printf("Enter b: ");
//     scanf("%d", &b);
//     printf("Enter c: ");
//     scanf("%d", &c);
//     printf("Perimeter of rectangle is %d", (a + b + c) / 3);
// }

// Q4. Write a program to check if given character is digit
// or not.
// void isDigit()
// {
//     char inputChar;
//     printf("Enter a character: ");
//     scanf("%c", &inputChar);
//     if (inputChar >= '0' && inputChar <= '9')
//     {
//         printf("%c is a digit\n", inputChar);
//     }
//     else
//     {
//         printf("%c is not a digit\n", inputChar);
//     }
// }

// Q5. Write a program to print the smallest number of two
// void findSmallest()
// {
//     int a, b;
//     printf("enter first number: ", a);
//     scanf("%d", &a);
//     printf("enter second number: ", b);
//     scanf("%d", &b);
//     if (a < b)
//     {
//         printf("%d is smallest", a);
//     }
//     else
//     {
//         printf("%d is smallest", b);
//     }
// }

// Q6. Create a salt function
// void salt(char password[])
// {
//     char salt[] = "123";
//     char newPassword[100];
//     strcpy(newPassword, password);
//     strcat(newPassword, salt);
//     puts(newPassword);
// }

// Q7. Write a function named slice, which takes a string & returns a sliced string from index n to m
// void slice(char str[], int from, int to)
// {
//     char sliced[to - from];
//     int j = 0;
//     for (int i = from; i <= to, j < (to - from); j++, i++)
//     {
//         sliced[j] = str[i];
//     }
//     sliced[j] = '\0';
//     puts(sliced);
// }

// Q8. Write a function to count the occurrence of vowels in a string.
// void countVowel(char str[])
// {
//     int count = 0;
//     int i = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//         {
//             count++;
//         }
//     }

//     printf("vowels in %s is %d", str, count);
// }