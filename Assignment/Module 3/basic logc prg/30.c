#include <stdio.h>

int main() {
    int years, days;

    // Input choice from user
    int choice;
    printf("Choose conversion:\n");
    printf("1. Years to Days\n");
    printf("2. Days to Years\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Convert years to days
            printf("Enter number of years: ");
            scanf("%d", &years);
            days = years * 365;
            printf("Equivalent: %d years is %d days.\n", years, days);
            break;
        case 2:
            // Convert days to years
            printf("Enter number of days: ");
            scanf("%d", &days);
            years = days / 365;
            printf("Equivalent: %d days is %d years.\n", days, years);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
