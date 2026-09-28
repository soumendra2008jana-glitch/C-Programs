#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCONTACT 10

typedef struct
{
    char name[30];
    char number[15];
    char email[30];
} Contact;

Contact address_book[MAXCONTACT];

int contact_count = 0;

void add_contact();
void view_contact();
void browse();

int choice;

void ask()
{
    printf("-------------------------------\n");
    printf("\t Contact Book \n");
    printf("-------------------------------\n");

    printf("[1]. ADD CONTACT\n[2]. VIEW CONTACTS \n[3]. BROWSE CONTACT\n[4]. EXIT PROGRAM");

    printf("\n\nEnter Your Choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        add_contact();
    }
    else if (choice == 2)
    {
        view_contact();
    }
    else if (choice == 3)
    {
        browse();
    }
    else if (choice == 4)
    {
        exit;
    }
    else
    {
        printf("<!> Invalid choice -> Enter a valid choice...\n\n");
        choice = 0;
        ask();
        exit;
    }
}

void add_contact()
{
    system("cls");
    printf("-------------------------------\n");
    printf("\t Add Contact \n");
    printf("-------------------------------\n");

    if (contact_count > MAXCONTACT)
    {
        printf("Cannot create contact...\nNo space left!");
        return;
    }
    else
    {
        printf("\nEnter Name: ");
        scanf(" %[^\n]s", address_book[contact_count].name);

        printf("Enter Phone Number: ");
        scanf(" %[^\n]s", address_book[contact_count].number);

        printf("Enter Email: ");
        scanf(" %[^\n]s", address_book[contact_count].email);

        contact_count++;
        printf("\nContact added successfully!\n");
    }
    ask();
}

void view_contact()
{
    system("cls");
    printf("-------------------------------\n");
    printf("\t View Contact \n");
    printf("-------------------------------\n");

    if (contact_count == 0)
    {
        printf("\nNo result to show...\n");
        ask();
        return;
    }
    else
    {
        for (int i = 0; i < contact_count; i++)
        {
            printf("Name : %s\n", address_book[i].name);
            printf("Phone No. : %s\n", address_book[i].number);
            printf("Email : %s\n\n", address_book[i].email);
        }
    }
    ask();
}
void browse()
{
    system("cls");
    printf("-------------------------------\n");
    printf("\t Browse Contact \n");
    printf("-------------------------------\n");
    if (contact_count == 0)
    {
        printf("No Contacts to find...\n");
        ask();
        exit;
    }
    else
    {

        char m_char[30];
        printf("Enter Recipent Name : ");
        scanf("%s", m_char);
        int found = 0;
        int ind;
        for (int i = 0; i < contact_count; i++)
        {
            if (strcasecmp(m_char, address_book[i].name) == 0)
            {
                printf("\nMatch Found --->\n\n");
                found = 1;
                ind = i;
                
            }
        }
        if (found == 1)
        {
            printf("Name : %s\nPhone : %s\nEmail : %s\n", address_book[ind].name, address_book[ind].number, address_book[ind].email);
        }else{
            printf("\n<!> No Match Found --->\n\n");
        }
        
        ask();

    }
}

int main()
{
    system("cls");
    ask();
    return 0;
}