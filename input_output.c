#include <stdio.h>

int main() {
    int age;
    float grade;
    char initial;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &grade);

    printf("Enter your middle initial: ");
    scanf(" %c", &initial);

    printf("\n--- User Profile ---\n");
    printf("Initial: %c\n", initial);
    printf("Age:     %d years old\n", age);
    printf("GPA:     %.2f\n", grade);

    return 0;
}