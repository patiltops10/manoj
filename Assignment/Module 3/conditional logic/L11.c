// WAP to find number is even or odd using ternary operator 
#include <stdio.h>

int main() {
    int num;

    // Accepting a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Using ternary operator to check if the number is even or odd
    (num % 2 == 0) ? printf("%d is Even\n", num) : printf("%d is Odd\n", num);

    return 0;
}
