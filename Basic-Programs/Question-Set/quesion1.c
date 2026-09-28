// # display as such - 
// # 5678
// # 678
// # 78
// # 8

#include<stdio.h>
int main()
{
    int number, size, n;
    printf("Enter a number to print : ");
    scanf("%d", &number);
    n = number;
    size = 0;
    while(n > 0){
        n = n/10;
        size++;
    }
    // printf("%d", size);
    while(size > 0){
        printf("%d\n", number % (10*(size)));
        size--;
    }



    return 0;
}