#include <stdio.h>

int main() {
    double kilometers, meters;

    // Input kilometers
    printf("Enter distance in kilometers: ");
    scanf("%lf", &kilometers);

    // Convert kilometers into meters (1 kilometer = 1000 meters)
    meters = kilometers * 1000;

    // Display the result
    printf("%.2lf kilometers is equal to %.2lf meters.\n", kilometers, meters);

    return 0;
}
