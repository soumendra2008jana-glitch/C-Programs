#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("cls");
    float a,b,c,discre, root1, root2;
    printf("Enter the value of a, b, c : ");
    scanf("%f %f %f", &a, &b, &c);

    discre = b*b - 4*a*c;
    if (discre < 0)
    {
        printf("\nThis Quadratic Equation has no real roots.");
        return 0;
    }else{
        root1 = (-b + sqrt(discre)) / (2*a);
        root2 = (-b - sqrt(discre)) / (2*a);
    }
    
    printf("\nThe roots are %5.2f %5.2f", root1, root2);

    return 0;
}
