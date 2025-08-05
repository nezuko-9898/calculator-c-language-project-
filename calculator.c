#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Simple Calculator\n");
    printf("Enter an operator (+, -, *, /) or q to quit: ");

    while (1) {
        scanf(" %c", &operator);

        if (operator == 'q' || operator == 'Q') {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch(operator) {
            case '+':
                result = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;

            case '-':
                result = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;

            case '*':
                result = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;

            case '/':
                if (num2 != 0)
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
                else
                    printf("Error! Division by zero.\n");
                break;

            default:
                printf("Invalid operator. Please try again.\n");
        }

        printf("\nEnter an operator (+, -, *, /) or q to quit: ");
    }

    return 0;
}
