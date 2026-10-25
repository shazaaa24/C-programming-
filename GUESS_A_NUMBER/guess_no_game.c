#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guessed;
    int no_of_guesses = 0;
    srand(time(0));                        // Seed the random number generator
    int randomnumber = (rand() % 100) + 1; // Random integer from 1 to 100
    do
    {
        printf("Guess a number:");
        scanf("%d",&guessed);
        if(guessed>randomnumber){
            printf("lower number please!\n");
        }
        else if(guessed<randomnumber){
            printf("higher number please!\n");
        }
        else{
            printf("CONGRATULATIONS!!!!!!!!!\n");
        }
        no_of_guesses++;
    } while (guessed != randomnumber);
    printf("you have guessed right number in %d guess!",no_of_guesses);
    return 0;
}