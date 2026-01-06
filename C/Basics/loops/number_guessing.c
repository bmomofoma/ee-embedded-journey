#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main(void){
    int guess = 0;
    int rand_num = 0;
    int max = 100;
    int min = 1;
    int tries = 0;

    srand(time(NULL));
    rand_num = (rand() % (max-min + 1)) + min; // Generates a number between 1 and 100

    printf("Number Guessing Game\n");

    do
    {
        printf("Enter Your Guess(%d-%d): ", min, max);
        scanf("%d", &guess);
        tries ++;
        if (guess > rand_num)
        {
            printf("Too High\n");
        }
        else if (guess < rand_num)
        {
            printf("Too Low\n");
        }
        else {
            printf("Congratulations you guessed right: %d, in %d tries", rand_num, tries);
        }
        
    } while (guess != rand_num);
    
}