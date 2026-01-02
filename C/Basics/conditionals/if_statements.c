/*
 * File: if_statements.c
 * Description: Program that prompts the user for their age and classifies 
 * them as a senior, adult, newborn, or child using conditional logic.
 */

#include <stdio.h>

int main(void) {
    int age = 0;

    printf("Enter your age: "); 
    scanf("%d", &age);

    if (age >= 65) 
    {
        printf("You are a senior\n");
    }
    else if (age >= 18) 
    {
        printf("You are an adult\n");
    }
    else if (age == 0) 
    {
        printf("You are a newborn\n");
    }
    else 
    {
        printf("You are a child\n");
    }
    
    return 0;
}