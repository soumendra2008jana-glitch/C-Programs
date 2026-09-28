//~ Problem Statement : Solve the pattern

// >>     * * * * *
// >>     *       *
// >>     *       *
// >>     *       *
// >>     * * * * *

#include <stdio.h>

int main()
{
    int row, i, j;
    printf("Enter no of rows : ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        if (i == 1 || i == row)
        {
            for (j = 1; j <= row; j++)
            {
                printf(" *");
            }
        }
        else
        {
            for (j = 1; j <= row; j++)
            {
                if (j == 1 || j == row)
                {
                    printf(" *");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}