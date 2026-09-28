#include <stdio.h>
#include <ctype.h>

void main()
{
    // # Create two variable to store uppercase and lowercase character.
    int uppercase, lowercase;

    // ? Take input from user first
    char c;
    printf("Enter a character : ");
    scanf("%c", &c);
    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (isalpha(c))
    {
        if (lowercase || uppercase)
        {
            printf("%c is a vowel.", c);
        }
        else
        {
            printf("%c is a constant.", c);
        }
    }
    else{
        printf("Please enter a valid character.");
    }
}
