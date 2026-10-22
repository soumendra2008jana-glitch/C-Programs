#include<stdio.h>
#include<stdlib.h>

// Required for clearing screen in modern envoironment

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// ------------------------

int main()
{
    clearScreen(); // Extra Process

    // Allocating memory for continuous int array.
    // first create a int pointer
    int * p;
    // Syntax : malloc(required size in bytes)
    p = (int *) malloc(10 * sizeof(int)); // Typecasting is important otherwise it will return a void pointer. We need to specify the pointer type.

    *p = 10; // *p --> value at p+0 location 
    p[1] = 29; // p[1] --> value at p+1 location
    *(p+2) = 36; // *(p+2) --> value at p+2 location
    // printf("%d", *p+2); // *p+2 --> value at (p[0] + 2)

    // If we want to access p+12 location we can't do that
    p[12] = 455;
    printf("\nValue at p+12 : %d", *(p+12)); // Gives us garbage value

    // Why using malloc()? Ans:- malloc allocates required memory from heap but does not change the bit values of memory

    // What does calloc()? Ans:- calloc allocates memory but it changes every bit to 0 in the required memory

    int * calc;
    calc = (int *) calloc(10 , sizeof(int)); // Syntax: calloc(no of elements, size of element);

    *calc = 40;
    calc[7] = 70;
    printf("%d", *calc);

    // calloc() beheaves same like malloc()

    // What is realloc()? Ans:- It modifies size of previously allocated heap memory. It does not if not used calloc or malloc previously

    p = (int *) realloc(p, 16 * sizeof(int)); // Syntax: pointer = (p_type *) realloc(which pointer, total size in bytes)
    // Extended memory from 10 elements to 16 elements

    // Now we can access p+12 location
    *(p+12) = 366;
    printf("\nValue at p+12 : %d", *(p+12));


    // When we dont need dynamic memory in heap memory we can free the memory
    // What is free()? Ans:- It revokes read and write permission from that pointer setting it to NULL and make available for reuse.

    free(calc);
    // Now we can't use calc pointer
    printf("\nTring to access calc[7] = %d", calc[7]);

    // Now if we try to set a new value
    calc[7] = 909;
    printf("\nTring to access calc[7] After assinment = %d", calc[7]);


}