/*
 * File: user_input.c
 * Description: Demonstrates user input in C using scanf and fgets
 *              for integers, floats, characters, and strings.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("How old are you? ");
    scanf("%d", &age);

    printf("What was your grade? ");
    scanf(" %c", &grade);

    printf("What is your GPA? ");
    scanf("%f", &gpa);

    // Clear input buffer before using fgets
    while (getchar() != '\n');

    printf("What is your name? ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline from fgets
    name[strcspn(name, "\n")] = '\0';

    printf("\nHello, %s\n", name);
    printf("You are %d years old.\n", age);
    printf("Your grade is %c and your GPA is %.2f\n", grade, gpa);

    return 0;
}
