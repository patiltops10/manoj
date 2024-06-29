#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compound_interest;

    // Input principal amount
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    // Input rate of interest
    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    // Input time in years
    printf("Enter time (in years): ");
    scanf("%lf", &time);

    // Convert rate of interest from percentage to decimal
    rate = rate / 100;

    // Calculate compound interest
    compound_interest = principal * pow(1 + rate, time) - principal;

    // Display the result
    printf("Compound interest = %.2lf\n", compound_interest);

    return 0;
}