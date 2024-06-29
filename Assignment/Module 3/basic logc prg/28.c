#include <stdio.h>

int main() {
    int years, months, days, remaining_days;

    // Input number of years
    printf("Enter number of years: ");
    scanf("%d", &years);

    // Convert years into months (assuming 12 months per year)
    months = years * 12;

    // Convert years into days (assuming 365 days per year)
    days = years * 365;

    // Convert remaining months into days
    remaining_days = months * 30;

    // Display the result
    printf("Equivalent: %d years is %d months and %d days\n", years, months, days + remaining_days);

    return 0;
}
