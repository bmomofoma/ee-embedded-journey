/*
 * File: format_specifiers.c
 * Description: Demonstrates the use of format specifiers for formatted
 *              floating-point output, including field width and precision.
 */

#include <stdio.h>

int main(void)
{
    float item_price_1 = 5.99f;
    float item_price_2 = 200.57889f;
    float item_price_3 = 100.999f;

    printf("Item 1: $%8.2f\n", item_price_1);
    printf("Item 2: $%8.2f\n", item_price_2);
    printf("Item 3: $%8.2f\n", item_price_3);

    return 0;
}
