#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, attempt = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("The number is %d\n", num);
    printf("Guess the number between 1 to 100\n");
    do
    {

        scanf("%d", &guess);
        if (guess > num)
        {
            printf("Lower number please!\n");
        }
        else if (guess < num)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts", attempt);
        }
        attempt++;
    } while (guess != num);
    return 0;
}