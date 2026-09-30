//~ Problem : Solve the Pattern

// >>       1
// >>       2 3
// >>       4 5 6
// >>       7 8 9 10

#include<stdio.h>

int main()
{
    int row, no=1, i, j;
    printf("Enter no of rows :");
    scanf("%d", &row);

    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%d ", no);
            no++;
        }
        printf("\n");
    }

    return 0;
}