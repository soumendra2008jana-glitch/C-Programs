// >> ----------- Pure Documentation ----------- <<
// & This is a number guessing game made for just education purpose.
// ~ Points :
/*  
    // ?  1. Generate a ransdom number from the system
    // ?  2. Ask user to guess a number
    // ?  3. Check if the num matches with the system guess, other wise say retry 
    // ?  4. After getting a match ask user if want to play again.
    // ?  5. If yes then repeat the process if no exit the game.
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ask_to_play();

int random_number()
{
    int min, max;
    min = 1;
    max = 100;

    int random_number = (rand() % (max - min + 1)) + min;

    return random_number;
}

int play(){
    int guessed = 0;
    int player_guessed_num, system_guessed_num;
    int attempt = 0;
    system_guessed_num = random_number();

    while (guessed == 0)
    {
        attempt++;
        printf("\nGuess a No. : ");
        scanf("%d", &player_guessed_num);

        if (player_guessed_num == system_guessed_num)
        {   
            printf("Attempt : %d", attempt);
            printf("\nYes you finally Guessed...");
            guessed = 1;
        }else if (player_guessed_num > system_guessed_num)
        {
            printf("Attempt : %d", attempt);
            printf("\nNumber is smaller.");
        }else{
            printf("Attempt : %d", attempt);
            printf("\nNumber is greater.");
        }
        
    }
    
    ask_to_play();
    return 0;

}

int ask_to_play(){
    char yes_or_no;
    printf("\nDo You want to play again ? (y/n) : ");
    yes_or_no = getchar();

    if (yes_or_no == 'y' || yes_or_no == 'Y')
    {
        play();
    }
    else if (yes_or_no == 'n' || yes_or_no == 'N')
    {
        exit(0);
    }
    else{
        printf("\nEnter a valid Choice.");
        ask_to_play();
    }
    
    return 0;
    
}

int main()
{
    srand(time(NULL));
    play();

    return 0;
}

// << -------------- Thank you ----------------- >>
// ~ < -------------- The End ----------------- >