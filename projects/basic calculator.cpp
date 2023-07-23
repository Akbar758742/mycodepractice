#include <stdio.h>

int main()
{
    double num1, num2;
    char operators;

    printf("Basic Calculator\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operators);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operators)
    {
    case '+':
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Invalid operator. Please enter a valid operator (+, -, *, /).\n");
        break;
    }

    return 0;
}

