/*
 * File: arithmetic_operators.c
 * Description: Demonstrates arithmetic operators in C, including
 *              integer division, floating-point division, and modulus.
 */

#include <stdio.h>

int main(void)
{
    int x = 5;
    int y = 2;

    float int_division = x / y;          // Integer division (result truncated)
    float float_division = x / (float)y; // Floating-point division
    int modulus = x % y;                 // Remainder

    printf("Integer division (5 / 2): %.2f\n", int_division);
    printf("Float division    (5 / 2): %.2f\n", float_division);
    printf("Modulus           (5 %% 2): %d\n", modulus);

    return 0;
}
