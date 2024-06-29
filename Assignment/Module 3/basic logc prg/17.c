#include <stdio.h>

int main() {
    float salary, premium_rate, insurance_premium;

    // Input the person's salary
    printf("Enter the person's salary: ");
    scanf("%f", &salary);

    // Input the premium rate (as a percentage)
    printf("Enter the premium rate (as a percentage): ");
    scanf("%f", &premium_rate);

    // Calculate the insurance premium
    insurance_premium = (premium_rate / 100.0) * salary;

    // Display the insurance premium
    printf("The insurance premium based on the salary is: %.2f\n", insurance_premium);

    return 0;
}