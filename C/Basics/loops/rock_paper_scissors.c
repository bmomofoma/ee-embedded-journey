#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main() {
    printf("*** ROCK, PAPER, SCISSORS ***\n"); 
    srand(time(NULL));

    
    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch (userChoice)
    {
    case 1:
        printf("You Chose Rock\n");
        break;
    case 2:
        printf("You Chose Paper\n");
        break;
    case 3:
        printf("You Chose Scissors\n");
        break;
    }

    switch (computerChoice)
    {
    case 1:
        printf("Computer Chose Rock\n");
        break;
    case 2:
        printf("Computer Chose Paper\n");
        break;
    case 3:
        printf("Computer Chose Scissors\n");
        break;
    }

    checkWinner(userChoice, computerChoice);
    return 0;
}

int getComputerChoice(){    
    return (rand() % 3) + 1;
}

int getUserChoice(){
    int choice = 0;
    do
    {
        printf("Choose an optioin\n");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("Enter a choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);
    
    return choice;
}

void checkWinner(int userChoice, int computerChoice){
    if (userChoice == computerChoice)
    {
        printf("It is a TIE");
    }
    else if (userChoice == 1 && computerChoice == 3)
    {
        printf("You WIN");
    }
    else if (userChoice == 2 && computerChoice == 1)
    {
        printf("You WIN");
    }
    else if (userChoice == 3 && computerChoice == 2)
    {
        printf("You WIN");
    }
    else
    {
        printf("You LOSE");
    }
    
}
