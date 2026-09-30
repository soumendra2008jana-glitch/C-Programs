//~ Problem : Solve the Pattern

// >>       * * * * *
// >>         * * * *
// >>           * * *
// >>             * *
// >>               *


#include<stdio.h>

int main()
{
    int no, i, j, k, n;
    printf("Enter no of Stars :");
    scanf("%d", &no);

    n = no;
    for(i=1;i<=no;i++){
        for(j=1;j<i;j++){
            printf("  ");
        }
        for(k=1; k<=n; k++){
            printf("* ");
        }
        printf("\n");
        n--;
    }

    return 0;
}