#include <stdio.h>

int main() {
    int days, months, remaining_days;

    // Input number of days
    printf("Enter number of days: ");
    scanf("%d", &days);

    // Convert days into months (assuming 30 days per month)
    months = days / 30;
    remaining_days = days % 30;

    // Display the result
    printf("Equivalent: %d months and %d days\n", months, remaining_days);

    return 0;
}
