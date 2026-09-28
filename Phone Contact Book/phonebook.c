// & I am creating a Basic phone contact book 
// ? Functionalities :
//>> 1. add new contact
//>> 2. view all contact
//>> 3. browse contact
//>> 4. delete contact
//>> 5. application info
//>> 6. about

#include<stdio.h>
#define MAX 10


struct Contact
{
    char name[20];
    char num[11];
};

struct Contact contracts[MAX];

int count = 0;

void add_num();
void view_num();
// void find_num();
// void del_num();
// void about();
// void info();

char input;

void ask_choice(){
    printf("[1] Add Contact \n[2] View All \n[3] Browse Caller \n[4] Delete Contact \n[i] App Info \n[5] About \n");
    
    printf("Choose an option : ");
    scanf("%c", &input);

    switch (input)
    {
    case '1':
        add_num();
        break;
    case '2':
        view_num();
        break;
    case '3':
        // find_num();
        break;
    case '4':
        // del_num();
        break;
    case '5':
        // about();
        break;
    case 'i':
        // info();
        break;
    default:
        printf("\nPlease enter a valid choice \n\n");
        ask_choice();
    }
}

int main()
{
    printf("------------- Contact Book -------------\n\n");
    ask_choice();

    return 0;
}

void add_num(){

    printf("\n------------- Add New Contact -------------\n\n");

    if (count == MAX){
        printf("Sorry! Contact book is full...\n");
        return;
    }

    printf("Enter First Name : ");
    scanf("%s", contracts[count].name);
    printf("Enter Mobile Number : ");
    scanf("%s", contracts[count].num);

    count++;

    printf("\nContact added successfully.\n");
    ask_choice();
}

void view_num(){
    for (int i = 0; i <= count; i++)
    {
        printf("%s \t %s", contracts[count].name, contracts[count].num);
    }
    ask_choice();
}