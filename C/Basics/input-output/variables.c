/*
 * File: variables.c
 * Description: Demonstrates basic variable declaration, initialization,
 *              and formatted output in C.
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int count = 10;
    float voltage = 3.30f;
    char grade = 'A';
    bool is_enabled = true;
    char message[] = "Embedded systems fundamentals";

    printf("Count: %d\n", count);
    printf("Voltage: %.2f V\n", voltage);
    printf("Grade: %c\n", grade);
    printf("Enabled: %s\n", is_enabled ? "true" : "false");
    printf("Message: %s\n", message);

    return 0;
}
