//WAP to find minimum number among 3 numbers using ternary operator 
#include <stdio.h>

int main() {
    float num1, num2, num3, minimum;

    // Input three numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter third number: ");
    scanf("%f", &num3);

    // Using ternary operator to find minimum
    minimum = (num1 < num2 && num1 < num3) ? num1 : ((num2 < num3) ? num2 : num3);

    // Display the minimum number
    printf("Minimum number: %.2f\n", minimum);

    return 0;
}
