#include <stdio.h>
#include <string.h>

// user defined
typedef struct student
{
    char fullName[100];
    int rollNo;
    float cgpa;
} std;

// typedef struct Address
// {
//     int houseNo;
//     char block[100];
//     char city[100];
//     char state[100];
// } Address;

// typedef struct Vector
// {
//     int x;
//     int y;
// } Vector;

struct complex
{
    int real;
    int img;
};

// void printInfo(struct student std);
// void printAddress(Address std);
// Vector sumOfVectors(Vector vec1, Vector vec2);

int main()
{
    printf("\t\t Learning about structs.\n\n");
    // struct student s1;
    // s1.cgpa = 12.23;
    // s1.rollNo = 10;
    // char name[] = "Gautam Vaishnav";
    // strcpy(s1.fullName, name);
    // printf("%s\n", s1.fullName);
    // printf("%f\n", s1.cgpa);
    // printf("%d\n\n", s1.rollNo);

    // struct student s2;
    // s2.cgpa = 12.34;
    // s2.rollNo = 234;
    // strcpy(s2.fullName, "Ram");
    // printf("%s\n", s2.fullName);
    // printf("%f\n", s2.cgpa);
    // printf("%d\n\n", s2.rollNo);

    // struct student s3;
    // s3.cgpa = 43.23;
    // s3.rollNo = 23;
    // strcpy(s3.fullName, "rajesh");

    // printf("%s\n", s3.fullName);
    // printf("%f\n", s3.cgpa);
    // printf("%d\n\n", s3.rollNo);
    // struct student students[3];

    // strcpy(students[0].fullName, "gautam");
    // students[0].cgpa = 23.34;
    // students[0].rollNo = 12;

    // strcpy(students[1].fullName, "vicky");
    // students[1].cgpa = 23.34;
    // students[1].rollNo = 12;

    // strcpy(students[2].fullName, "kaushal");
    // students[2].cgpa = 23.34;
    // students[2].rollNo = 12;

    // for (int i = 0; i < 3; i++)
    // {
    //     if (i == 0)
    //     {
    //         printf("\t FUll Name \t\t Roll No \t\t Cgpa\n");
    //     }
    //     printf("\t %s \t\t %d \t\t %f\n", students[i].fullName, students[i].rollNo, students[i].cgpa);
    // }

    // std student1 = {"Gautam", 12, 234.23};
    // std *ptr;
    // ptr = &student1;
    // printf("%s get %f cgpa and roll no is %d\n", student1.fullName, student1.cgpa, student1.rollNo);
    // printInfo(student1);
    // printf("%s get %f cgpa and roll no is %d\n", (*ptr).fullName, (*ptr).cgpa, (*ptr).rollNo);
    // array operator
    // printf("%s get %f cgpa and roll no is %d\n", ptr->fullName, ptr->cgpa, ptr->rollNo);

    // Q1. Enter address of 5 people
    // Address addresses[5] = {
    //     {12, "KDt - 343", "Jaipur", "Rajasthan"},
    //     {13, "Raj - 5454", "Jaipur", "Rajasthan"},
    //     {15, "KDt - 767", "Jaipur", "Rajasthan"},
    //     {19, "Check - 878", "Jaipur", "Rajasthan"},
    //     {23, "Boss - 979", "Jaipur", "Rajasthan"},
    // };
    // for (int i = 0; i < 5; i++)
    // {
    //     printAddress(addresses[i]);
    // }

    // Q2. create a structure to store vectors. Then make a function to return sum of 2 vectors.
    // Vector vector1 = {1, 3};
    // Vector vector2 = {9, 12};
    // Vector sum = sumOfVectors(vector1, vector2);
    // printf("Sum of 1 and 2 is %di + %dj", sum.x, sum.y);

    // Q3. Create a structure to store complex numbers. (use arrow operators)
    struct complex myComplexNumber = {12, 13};
    struct complex *complexPtr;
    complexPtr = &myComplexNumber;
    printf("%d real %d img", complexPtr->real, complexPtr->img);

    return 0;
}

// void printInfo(struct student std)
// {
//     printf("Fullname = %s, rollNo = %d and cgpa = %f\n", std.fullName, std.rollNo, std.cgpa);
// };

// void printAddress(Address std)
// {
//     printf("HouseNo = %d, Block = %s, City = %s, State = %s\n", std.houseNo, std.block, std.city, std.state);
// }

// Vector sumOfVectors(Vector vec1, Vector vec2)
// {
//     Vector sum;
//     sum.x = vec1.x + vec2.x;
//     sum.y = vec1.y + vec2.y;
//     return sum;
// }