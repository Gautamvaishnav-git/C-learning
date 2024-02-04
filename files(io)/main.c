#include <stdio.h>

void readFile(FILE *fptr);

int main()
{
    printf("\t\t Learning about files\n\n");

    FILE *fptr;
    fptr = fopen("test.txt", "r");
    if (fptr == NULL)
    {
        printf("File does not exist.\n");
    }
    else
    {

        // char ch[100];
        // fscanf(fptr, "%s", &ch);
        // printf("%s", ch);
        // fprintf(fptr, "Change file data");
        // fprintf(fptr, "%c");

        // printf("%c", fgetc(fptr));
        // fputc('c', fptr);
        readFile(fptr);

        fclose(fptr);
    }

    return 0;
}

void readFile(FILE *fptr)
{
    char ch;
    while (ch != EOF)
    {
        ch = fgetc(fptr);
        printf("%c", ch);
    }
    printf("\n");
};