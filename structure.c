#include<stdio.h>

struct Student
{
    int id;
    char name[20];
    int age;
} std1;

typedef struct class
{
    int roll;
    char c_teacher[20];
    char sec;
} std2;


void main(){

    struct Student std1 = {1, "some", 18};

    printf("%d \t %s \t %d \n", std1.id, std1.name, std1.age);

    struct class xi;
    
    xi.roll = 7;
    // xi.c_teacher = "Banu Da";
    xi.sec = 'A';

    printf("%d \t %c \n", xi.roll, xi.sec);
    

}