#include <stdio.h>

int main() {
    int minutes, hours, seconds, remaining_minutes;

    // Input number of minutes
    printf("Enter number of minutes: ");
    scanf("%d", &minutes);

    // Convert minutes into hours
    hours = minutes / 60;

    // Convert remaining minutes into seconds
    remaining_minutes = minutes % 60;
    seconds = remaining_minutes * 60;

    // Display the result
    printf("Equivalent: %d minutes is %d hours, %d minutes, and %d seconds\n", minutes, hours, remaining_minutes, seconds);

    return 0;
}
