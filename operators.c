

int main() {
    int num1, num2;
    char operator;
    int result;

    // Prompt the user for input
    printf("Enter the first number:\n ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %):\n ");
    scanf(" %c", &operator);

    printf("Enter the second number:\n ");
    scanf("%d", &num2);

    // Perform the operation using a switch statement
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator. Please use one of +, -, *, /, or %.\n");
            break;
    }

    return 0;
}



