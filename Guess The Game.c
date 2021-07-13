#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, numguess;
    srand(time(0));
    number = rand() % 100 + 1;

   

    do
    {
        printf("Guess the number between 1 to 100: \n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower Number please !\n");
        }
        else if (guess < number)
        {
            printf("Higer Number please !\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", numguess);
        }
        numguess++;
    } while (guess != number);

    return 0;
}