/*
 * File: weight_converter.c
 * Description: Weight Conversion Calculator that allows the user to convert 
 * values between Kilograms and Pounds based on a menu selection.
 */

#include <stdio.h>

int main(void) {
    int choice_of_unit_for_conv = 0;
    double weight_in_kgs = 0.0;
    double weight_in_lbs = 0.0;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");

    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice_of_unit_for_conv);

    if (choice_of_unit_for_conv == 1) 
    {
        // Kilograms -> Pounds
        printf("Enter the weight in kilograms: ");
        scanf("%lf", &weight_in_kgs);
        
        weight_in_lbs = weight_in_kgs * 2.20462;
        
        printf("%.2lf kilograms is equal to %.2lf pounds\n", weight_in_kgs, weight_in_lbs);
    }
    else if (choice_of_unit_for_conv == 2) 
    {
        // Pounds -> Kilograms
        printf("Enter the weight in pounds: ");
        scanf("%lf", &weight_in_lbs);
        
        weight_in_kgs = weight_in_lbs / 2.20462;

        printf("%.2lf pounds is equal to %.2lf kilograms\n", weight_in_lbs, weight_in_kgs);
    }
    else 
    {
        printf("Invalid Choice!\n");
    }

    return 0;
}