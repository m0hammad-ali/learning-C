#include <stdio.h>

int main() {
    int num1, num2;
    int sum, diff, product, quotient, remainder;

    printf("--- Simple Integer Calculator ---\n");

    printf("Enter two integers separated by a space: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2; 
    remainder = num1 % num2;

    printf("\nResults:\n");
    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, diff);
    printf("%d * %d = %d\n", num1, num2, product);
    printf("%d / %d = %d (Integer Division)\n", num1, num2, quotient);
    printf("%d %% %d = %d (Remainder)\n", num1, num2, remainder);

    return 0;
}