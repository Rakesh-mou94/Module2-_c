#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    // Input numbers and operator
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // space before %c to skip previous newline

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Operation using switch-case
    switch (op) {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;

        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;

        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;

        case '/':
            if (num2 == 0)
                printf("Error: Division by zero is not allowed!\n");
            else
                printf("Result: %.2f\n", num1 / num2);
            break;

        case '%':
            // modulus works on integers only
            printf("Result: %d\n", (int)num1 % (int)num2);
            break;

        default:
            printf("Invalid operator! Please use +, -, *, /, %% \n");
    }

    return 0;
}
