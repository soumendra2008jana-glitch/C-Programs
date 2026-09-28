#include<stdio.h>
int main()
{
    float values[20];
    float low, high, avarage, range;

    // Input data
    int i = 0;
    printf("Enter numbers (Enter negative [-ve] number to end) : \n");
    do{
        scanf("%f", &values[i]);
        i = i+1;
    }
    while (values[i] > 0);

    printf("%f %f %f %f", values[0],values[1],values[2],values[3]);
    
    return 0;
}