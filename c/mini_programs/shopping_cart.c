#include <stdio.h>
#include <string.h>

int main(void) {
    char item[50];
    float price = 0.0f;
    int quantity = 0;
    const char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy? ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = '\0';

    printf("What is the price for each? ");
    scanf("%f", &price);

    printf("How many would you like? ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou bought %d x %s\n", quantity, item);
    printf("Your total is %c%.2f\n", currency, total);

    return 0;
}
