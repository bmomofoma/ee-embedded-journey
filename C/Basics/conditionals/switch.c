/*
 * File: switch.c
 * Description: Program that prompts the user for a single character representing
 * a day of the week and identifies the day using a switch statement.
 */

#include <stdio.h>

int main(void) {
    char choiceOfDay = '\0';

    printf("Enter day of Week (M, T, W, R, F, S, U): ");
    // Added a space before %c to consume any leading whitespace/newlines safely
    scanf(" %c", &choiceOfDay); 

    switch (choiceOfDay) {
        case 'M':
        case 'm':
            printf("It is Monday\n");
            break;
            
        case 'T':
        case 't':
            printf("It is Tuesday\n");
            break;
            
        case 'W':
        case 'w':
            printf("It is Wednesday\n");
            break;
            
        case 'R':
        case 'r':
            printf("It is Thursday\n");
            break;
            
        case 'F':
        case 'f':
            printf("It is Friday\n");
            break;
            
        case 'S':
        case 's':
            printf("It is Saturday\n");
            break;
            
        case 'U':
        case 'u':
            printf("It is Sunday\n");
            break;
            
        default:
            printf("Enter a valid input (M, T, W, R, F, S, U)\n");
            break;
    }

    return 0;
}