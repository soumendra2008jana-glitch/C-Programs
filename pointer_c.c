#include <stdio.h>

int main() {
    int age = 18;      // A regular integer variable
    int *ptr;          // Declaring a pointer variable (the * means "this is a pointer")

    ptr = &age;        // Storing the memory address of 'age' into the pointer 'ptr'

    printf("Value of age: %d\n", age);          // Outputs: 18
    printf("Address of age: %p\n", &age);       // Outputs something like: 0x7ffee3b4b7bc
    
    printf("Value stored in ptr: %p\n", ptr);   // Outputs the same address: 0x7ffee3b4b7bc
    printf("Value ptr points to: %d\n", *ptr);  // Outputs: 18 (Dereferencing the pointer)

    

    return 0;
}