#include<stdio.h>

int str_len(char *string); // Declaring a function 

int main()
{
    char *str1 = "This is a string"; // Taking a demo string
    int len = str_len(str1); // Calling the actual function and passing the address of string

    printf("The lenght of string is %d", len); // Printing returned length 
    return 0;
}

int str_len(char *string) // Passing the address of 0th index of string
{
    int count = 0; // Taking variable to count
    while (*string != '\0') // Start a loop untill we get the string ending charecter '\0'
    {
        count++; // Increase the count
        string = string + 1; // Traversing address of string element 
    }

    return count; // Returning the length
}