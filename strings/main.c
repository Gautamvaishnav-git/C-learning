#include <stdio.h>
#include <string.h>

// void printString(char str[]);
// int printLengthOfString(char str[]);

int main()
{
    printf("Learning about strings\n");

    // method 1
    // char myName[] = {'G', 'A', 'U', 'T', 'A', 'M', '\0'};
    // method 2
    // char firstName[] = "GAUTAM";
    // char lastName[] = "vaishnav";

    // printString(firstName);
    // printString(lastName);
    // printf("%s %s", firstName, lastName);

    // char fullName[100];
    // scanf("%s", &fullName);
    // printf("Ur Name is %s", fullName);

    // Gets and puts
    char fullName[100];
    // gets(fullName); --> deprecated because it does not track size of string
    fgets(fullName, 100, stdin);
    // puts(fullName);
    // printf("length is %d ", printLengthOfString(fullName));
    printf("%u", strlen(fullName));

    return 0;
}

// void printString(char str[])
// {
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         printf("%c", str[i]);
//     }
//     printf(" ");
// }

// int printLengthOfString(char str[])
// {
//     int count = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count - 1;
// }