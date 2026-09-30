//~ Problem Statement : Solve the pattern
// >>           1
// >>           1 2
// >>           1 2 3
// >>           1 2 3 4

#include<stdio.h>

int main()
{
    int row, i, j;
    printf("Enter no of rows :");
    scanf("%d", &row);

    for(i=1;i<=row; i++){
        for(j=1;j<=i;j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}