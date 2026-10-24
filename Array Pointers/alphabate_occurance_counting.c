#include<stdio.h>
#include<ctype.h>
int main()
{
    char text[] = "A quick brown fox jumped over the lazy dog"; //Text to be counted
    int count[26] = {0}; // Place to store frequency of occurence
    int i = 0,j=0, pos=0, length=0; // pos to find alphabate position in count[]
    char alpha = 'a'; // To print alphabates

    while(text[i] != '\0'){
        if(text[i] != ' '){ // Checking for whitespace
            if(isalpha(text[i])){ // Checking for if alphabate
                pos = tolower(text[i]) - 'a';
                count[pos]++; // Updating frequency
            }
            j++; // Updating lenght in each iteration
        }
        length++; // Updating length
        i++;
    }

    printf("\nText : %s\n", text); // Printing actual text

    printf("+---------+---------+\n"); // Printing Heading style
    printf("|Alphabet |  Count  |\n");
    printf("+---------+---------+\n");


    for(i=0;i<26;i++){
        if(count[i] != 0){
            printf("|    %c    |    %2d   |\n", alpha+i, count[i]); // Printing each alpha and freq.
            printf("+---------+---------+\n");
            // printf("%c - %d\n",alpha+j, count[j]);
        }
    }
    printf("Total Length with space is = %d\n", length);
    printf("Total Length without space is = %d", j);

}