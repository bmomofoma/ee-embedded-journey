/*
 * File: simple_calc.c
 * Description: A simple calculator program that takes two numbers and an
 * operator (+, -, *, /) from the user to perform basic arithmetic.
 */

#include <stdio.h>

int main(void) {
    char operator = '\0';
    float num1 = 0.00f;
    float num2 = 0.00f;
    float result = 0.00f;

    printf("Simple Calculator\n");
    
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (operator) 
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if (num2 == 0) 
            {
                printf("Error: You cannot divide by 0.\n");
                return 1; // Exit the program immediately on error
            }
            else 
            {
                result = num1 / num2;
            }
            break;

        default:
            printf("Error: Invalid Operator entered.\n");
            return 1; // Exit the program immediately on error
    }

    // This line will only run if we didn't hit an error above
    printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);

    return 0;
}