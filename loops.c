#include <stdio.h>

int main() {
    printf("Counting up with a FOR loop:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    printf("\n\nCounting down with a WHILE loop:\n");
    int count = 5;
    while (count > 0) {
        printf("%d ", count);
        count--;
    }

    printf("\nDone!\n");
    return 0;
}
