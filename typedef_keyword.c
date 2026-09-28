// # 'typedef' keyword is used to give alias to exsiting data types. It is just like giving a nick name.

// ? Syntax: typedef <previous_name> <alias_name>

#include<stdio.h>

typedef struct Student
{
    int id;     // ~ Member of a stucture
    char name[];    // ~ Member of a stucture
} std;

// & Here the 'std' is new alias for structure Student.

int main()
{

    std s1,s2; // >> Creating new variable of 'std' alias

    s1.id = 12; // >> Assigning value to indivisual member
    s2.id = 45; // >> Assigning value to indivisual member

    printf("The value of s1's Id is %d\n", s1);
    printf("The value of s2's Id is %d\n", s2);

// ~ ----------------------------------------------------------

    // ? Here ul is new alias for 'unsigned long'

    // typedef unsigned long ul;
    // ul l1, l2, l3;

// ~ ----------------------------------------------------------

    // int* a, b;
    // int c = 76;
    // a = &c;
    // b = &c;

    //! The above code will give you an error 
    //# because the a is a pointer but b is a int.
    //= To solve this problem - we will create a alias of "integer pointer".

    typedef int* i_Pointer;
    i_Pointer a, b;
    
    // >> Now a & b both is a integer pointer.







    return 0;
}
 

