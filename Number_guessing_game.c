#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

    srand(time(0));

    int random_number=(rand()%100)+1;
    int no_of_guesses=0;
    int guessed;


    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guessed);

        if (guessed>random_number)
        {
            printf("Lower number please\n");        
        }

        else if(guessed<random_number)
        {
            printf("Higher number please\n");
        }

        else{
            printf("Congrats !!\n");
        }

         no_of_guesses++;
        
    } while (guessed !=random_number);

    printf("You guessed the number in %d guesses\n",no_of_guesses);

    return 0;
    
}