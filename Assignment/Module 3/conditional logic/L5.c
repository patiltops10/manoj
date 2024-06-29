#include <stdio.h>

int main() {
    double number;

    // Accepting the number from the user
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Checking if the number is positive or negative
    if (number > 0) {
        printf("%.2lf is positive.\n", number);
    } else if (number < 0) {
        printf("%.2lf is negative.\n", number);
    } else {
        printf("The number is zero.\n");
    }


}