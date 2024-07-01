// Accept 5 numbers from user and perform sum of array.
#include <stdio.h>

int main() {
    int numbers[5]; // Array to store 5 numbers
    int sum = 0;

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum of the array
    for (int i = 0; i < 5; ++i) {
        sum += numbers[i];
    }

    // Print the sum
    printf("Sum of the numbers is: %d\n", sum);

    return 0;
}
