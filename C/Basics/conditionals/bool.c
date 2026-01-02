/*
 * File: bool.c
 * Description: Program that demonstrates the use of the stdbool library 
 * to check a condition and print the user's senior status.
 */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    // In a real application, this will be calculated from an age variable
    bool isSenior = true;

    if (isSenior) 
    {
        printf("You are a senior\n");
    }
    else 
    {
        printf("You are not a senior\n");
    }

    return 0;
}