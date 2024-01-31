#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    // int a, b;
    // printf("Enter num a\n");
    // scanf("%d", &a);

    // printf("Enter num b\n");
    // scanf("%d", &b);

    // int sumOf = a + b;
    // printf("%d", sumOf);

    // area of square
    // int side;
    // printf("Enter side\n");
    // scanf("%d", &side);

    // int area = side * side;
    // printf("Area of square is %d\n", area);

    // Radius of square
    // float areaOfCircle;
    // printf("Enter area of circle\n");

    // scanf("%f", &areaOfCircle);

    // float radius = sqrt(areaOfCircle / 3.14);

    // printf("Radius of circle is %f\n", radius);

    // int a = 1.99999;
    // printf("%d", a);

    // operator precedence
    // int a = 4 + 4 * 10 / 5;
    // printf("%d", a);

    // int a = 5 + 2 / 2 * 3;
    // printf("%d", a);

    // Q1. Write a program to check if a number is divisible by 2 or not.
    /**
      int num;
        printf("Please enter your number\n");
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            printf("Wola number %d is divisible by 2", num);
        }
        else
        {
            printf("Your number %d is not divisible by 2", num);
        }
    **/

    // Q2. Write a program to check if a number is odd or event
    // int num;
    // printf("Enter you number: ");
    // scanf("%d", &num);

    // if (num % 2 == 0)
    // {
    //     printf("Wow %d is even", num);
    // }
    // else
    // {
    //     printf("Oh %d is odd", num);
    // }

    // Q3. if it is sunday and snowing then print true otherwise false
    // int isSunday = 1;
    // int isSnowing = 0;

    // if (isSunday && isSnowing)
    // {
    //     printf("true");
    // }
    // else
    // {
    //     printf("false");
    // }

    // Q4. Check a number is two digit or not
    // int num;
    // printf("Enter your number: ");
    // scanf("%d", &num);

    // if (num > 9 && num < 100)
    // {
    //     printf("Number %d is tow digit number", num);
    // }
    // else
    // {
    //     printf("Number %d is not tow digit number", num);
    // }

    // Q5 write a program to print the average of 3 numbers.
    // int num1, num2, num3;
    // printf("Enter your first number: ");
    // scanf("%d", &num1);

    // printf("Enter your second number: ");
    // scanf("%d", &num2);

    // printf("Enter your third number: ");
    // scanf("%d", &num3);

    // int sumOfThree = num1 + num2 + num3;
    // int avg = sumOfThree / 3;

    // printf("Average of numbers is %d", avg);

    // Q6. Write a program to check if given character is digit or not
    // int enteredChar;

    // printf("Enter your char: ");
    // scanf("%c", &enteredChar);

    // if (isdigit(enteredChar))
    // {
    //     printf("Entered char is an int");
    // }
    // else
    // {
    //     printf("Entered char is not an int");
    // }

    // Ternary operators
    // int yourValue = 1;

    // yourValue ? printf("TRUE") : printf("FALSE");

    // return 0;

    // Switch
    // char day[] = "";

    // int day;
    // printf("Enter day (1-7): ");
    // scanf("%d", &day);

    // switch (day)
    // {
    // case 2:
    // {
    //     printf("Its tuesday\n");
    //     break;
    // }
    // case 1:
    // {
    //     printf("Its monday");
    //     break;
    // }

    // case 3:
    // {
    //     printf("Its wednesday\n");
    //     break;
    // }
    // case 4:
    // {
    //     printf("Its thursday\n");
    //     break;
    // }
    // case 5:
    // {
    //     printf("Its friday\n");
    //     break;
    // }
    // case 6:
    // {
    //     printf("Its saturday\n");
    //     break;
    // }
    // case 7:
    // {
    //     printf("Its sunday\n");
    //     break;
    // }
    // default:
    // {
    //     printf("You entered invalid day\n");
    //     break;
    // }
    // }

    // Q7. Write a program to check if a student is passed or failed.
    // int marks;
    // printf("Please enter your marks: ");
    // scanf("%d", &marks);

    // if (marks >= 30)
    // {
    //     printf("You are passed");
    // }
    // else
    // {
    //     printf("You are failed");
    // }

    // Q8. Write a program to give grades to a student
    // int marks;
    // printf("Enter your marks: ");
    // scanf("%d", &marks);

    // if (marks < 30)
    // {
    //     printf("C");
    // }
    // else if (marks >= 30 && marks < 70)
    // {
    //     printf("B");
    // }
    // else if (marks >= 70 && marks < 90)
    // {
    //     printf("A");
    // }
    // else if (marks >= 90 && marks <= 100)
    // {
    //     printf("A+");
    // }
    // else
    // {
    //     printf("Invalid marks entered");
    // }

    // Q9. Write a program to check if a character is uppercase or not;
    // char value;
    // printf("Please enter your character: ");
    // scanf("%c", &value);

    // if (value >= 'A' && value <= 'Z')
    // {
    //     printf("%c is uppercase", value);
    // }
    // else if (value >= 'a' && value <= 'z')
    // {
    //     printf("%c is lowercase", value);
    // }
    // else
    // {
    //     printf("%c is not a valid character", value);
    // }

    // Loops in C
    /**
     * Type of loops in C
     *      1. For Loop
     *      2. While Loop
     *      3. Do While
     */

    // for loop
    // for (int a = 1; a <= 5; a++)
    // {
    //     printf("Hello %d times\n", a);
    // }

    // while loop
    // int a = 1;
    // while(a <= 5){
    //     printf("Hello world %d times \n", a);
    //     a++;
    // }

    // Do while loop

    int i = 1;

    do
    {
        printf("Hello world %d times\n", i);
        i++;
    } while (i <= 5);

    return 0;
}