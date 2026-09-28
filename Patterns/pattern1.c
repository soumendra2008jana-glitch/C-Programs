//~ Problem Statement : Create this pattern

// >>               *
// >>             * * *
// >>           * * * * *
// >>         * * * * * * *

#include<stdio.h>

int main()
{
    int row, i, j, k, no = 1;
    printf("Enter the number of rows : ");
    scanf("%d", &row);

    for(i = 1;i <= row;i++){
        for (j = i; j <= row - 1; j++)
        {
            printf("  ");
        }
        for(k = 1; k <= no; k++){
            printf(" *");
        }
        printf("\n");
        no = no + 2;
    }
}