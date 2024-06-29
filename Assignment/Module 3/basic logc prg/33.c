#include <stdio.h>

int main() {
    int number;
    
    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Calculate and print first three powers
    printf("First three powers of %d are:\n", number);
    printf("%d^1 = %d\n", number, number);
    printf("%d^2 = %d\n", number, number * number);
    printf("%d^3 = %d\n", number, number * number * number);

    return 0;
}
