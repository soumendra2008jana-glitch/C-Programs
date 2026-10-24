// ~ Problem : Solve the pattern
 
// >>           *
// >>         * *
// >>       * * *
// >>     * * * *
// >>   * * * * *

#include<stdio.h>

int main()
{
    int i, j, k, rows;
    printf("Enter no of rows :");
    scanf("%d", &rows);
    printf("\n");

    for(i=0;i<rows;i++){
        for(j=0;j<rows-i;j++){
            printf("  ");
        }
        for(k=0;k<i+1;k++){
            printf(" *");
        }
        printf("\n");
    }
    
}