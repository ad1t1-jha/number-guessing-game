#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNum;
    int guess;
    int guessNum;
    int guessCount = 0;

    srand(time(NULL));
    secretNum = rand() % 100;

    printf("How many tries would you like?\n");
    scanf("%d", &guessNum);
    printf("You may start guessing numbers between 0 and 100!\n");

    while(guess != secretNum && guessNum != 0){
        printf("Enter a number: ");
        scanf("%d", &guess);
        guessNum = guessNum - 1;
        guessCount++;
        if(guess > secretNum && guess != secretNum && guessNum !=0){
            printf("Lower!\n");
        } else if(guess != secretNum && guessNum != 0){
            printf("Higher!\n");
        }
    }

    if(guessNum == 0){
        printf("Out of guesses\n");
    } else{
    printf("You win!\n");
    }
    printf("The number was %d!\n", secretNum);
    printf("It took you %d tries to guess the number", guessCount);

    return 0;
}
