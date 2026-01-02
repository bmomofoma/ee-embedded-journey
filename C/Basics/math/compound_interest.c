/*
 * File: compound_interest.c
 * Description: Calculates compound interest using user input
 *              for principal, rate, time, and compounding frequency.
 * Concepts: scanf, math library, variables
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int compounds_per_year = 0;
    double amount = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate (r): ");
    scanf("%lf", &rate);
    rate /= 100;

    printf("Enter the number of years (t): ");
    scanf("%d", &years);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &compounds_per_year);

    amount = principal * pow(1 + rate / compounds_per_year, compounds_per_year * years);

    printf("Over %d years, your total will become $%.2lf\n", years, amount);

    return 0;
}
