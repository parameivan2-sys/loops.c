#include <stdio.h>

int main() {
    float num1,num2;
        int opt;
    printf("Enter 1st Number: ");
    scanf("%f", &num1);
    printf("Enter 2nd Number: ");
    scanf("%f", &num2);

    printf("Select Operator (1-4): ");
    scanf("%d", &opt);

switch (opt)
{
    case 1:
        printf("Addition: %.2f", num1 + num2);

        break;
    case 2:
        printf("Subtraction: %.2f", num1 - num2);
        break;
    case 3:
        printf("Multiplication: %.2f", num1 * num2);
        break;
    case 4:
        printf("Division: %.2f", num1 / num2);
        break;
    default:
    break;
}

return 0;
}