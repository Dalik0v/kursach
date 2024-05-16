#include <stdio.h>
#include <stdlib.h>

// Define a Calculator class
typedef struct {
    double operand1;
    double operand2;
} Calculator;

// Method to add two numbers
double add(Calculator *calc) {
    return calc->operand1 + calc->operand2;
}

// Method to subtract two numbers
double subtract(Calculator *calc) {
    return calc->operand1 - calc->operand2;
}

// Method to multiply two numbers
double multiply(Calculator *calc) {
    return calc->operand1 * calc->operand2;
}

// Method to divide two numbers
double divide(Calculator *calc) {
    if (calc->operand2 == 0) {
        printf("Error: Cannot divide by zero.\n");
        return 0;
    }
    return calc->operand1 / calc->operand2;
}

int main() {
    // Create an instance of the Calculator class
    Calculator calc;
    double result;
    char operator;

    // Get input from user
    printf("Enter first number: ");
    scanf("%lf", &calc.operand1);

    printf("Enter second number: ");
    scanf("%lf", &calc.operand2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = add(&calc);
            break;
        case '-':
            result = subtract(&calc);
            break;
        case '*':
            result = multiply(&calc);
            break;
        case '/':
            result = divide(&calc);
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    // Display the result
    printf("Result: %lf\n", result);

    return 0;
}
