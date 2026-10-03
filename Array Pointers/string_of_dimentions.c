#include<stdio.h>

int main()
{
    char *arr[3] = {"First Line","Introduction added", "A few data."};
    printf("%s\n", arr[0]);
    printf("%s\n", arr[1]);
    printf("%s\n\n", arr[2]);
    
    printf("%s\n", *(arr+1));
    printf("%s\n", *(arr+2));
  
}