#include <stdio.h>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main(void) {

    char operator = '\0';
    double num1 = 0.00f;
    double num2 = 0.00f;
    double result = 0.00f;

    printf("Simple Calculator\n");
    
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator) 
    {
        case '+':
            result = add(num1, num2);
            break;

        case '-':
            result = subtract(num1, num2);
            break;

        case '*':
            result = multiply(num1, num2);
            break;

        case '/':
            result = divide(num1, num2);
            break;

        default:
            printf("Error: Invalid Operator entered.\n");
            return 1; // Exit the program immediately on error
    }

    // This line will only run if we didn't hit an error above
    printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);
    return 0;
}

double add(double a, double b){
    return a + b;
}

double subtract(double a, double b){
    return a - b;
}

double multiply(double a, double b){
    return a * b;
}

double divide(double a, double b){
    if (b == 0) {
        printf("Error: Division by zero.\n");
        return 0.0;
    }
    return a / b;
}
