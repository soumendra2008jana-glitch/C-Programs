#include<stdio.h>
int main()
{
    FILE *fp; // Creating a file pointer
    char c; // Creating a char variable to store characters

    //* A file pointer can be opened in three modes (r,w,a) ,{read, write, append}

    fp = fopen("demo_file", "w"); //? Opening in write mode
    printf("Write your demo text :");
    while ((c = getchar()) != EOF) //? Getting each char and storing in 'c' variable
    {
        putc(c, fp); //? Geting characters one by one
    }
    fclose(fp); //~ Closing file

    fp = fopen("demo_file", "r"); //? Reopening file in read mode
    while ((c = getc(fp)) != EOF) //? Reading each char and storing in 'c' variable
    {
        printf("%c", c); //? Printing each character
    }
    return 0;
}