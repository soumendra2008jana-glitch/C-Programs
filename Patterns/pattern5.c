//~ Problem : Solve the Pattern

// >>       A
// >>       B C
// >>       D E F
// >>       G I J k

#include<stdio.h>

int main()
{
    int row, i, j;
    char ch = 'A';
    printf("Enter no of rows :");
    scanf("%d", &row);

    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}