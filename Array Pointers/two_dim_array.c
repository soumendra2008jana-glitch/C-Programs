// ~ HERE I WILL CREATE A TWO DIMENTIONAL ARRAY AND TRAVERSE THROUGH THE POINTERS
//>> Things to keep in mind :-
//<<      1. Array = Memory Location
//<<      2. Array[1] = Memory Location
//<<      3. Array[1][1] != Memory Location
//<<      4. Array[1][1] = Value at index [1][1]

#include<stdio.h>

int main()
{
    int array[2][3] = {10,20,30,40,50,60};

    printf("Value at address %u is %d\n", array, *array);
    printf("Value at address %u is %d\n", array[0], *array[0]);
    printf("Value at address %u is %d\n", array[1], *array[1]);
    printf("Value at address %u is %d\n", &array[0][0], array[0][0]);
    printf("Value at address %u is %d\n", &array[0][1], array[0][1]);
    printf("Value at address %u is %d\n", &array[0][2], array[0][2]);
    printf("Value at address %u is %d\n", &array[1][0], array[1][0]);
    printf("Value at address %u is %d\n", &array[1][1], array[1][1]);
    printf("Value at address %u is %d\n", &array[1][2], array[1][2]);
}