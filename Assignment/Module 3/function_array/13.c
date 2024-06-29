#include <stdio.h>

int main() {
    int numbers[5];
    int i;

    // Prompt the user to enter 5 numbers
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Check each number if it is even or odd
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("Number %d (%d) is even.\n", i + 1, numbers[i]);
        } else {
            printf("Number %d (%d) is odd.\n", i + 1, numbers[i]);
        }
    }

    return 0;
}