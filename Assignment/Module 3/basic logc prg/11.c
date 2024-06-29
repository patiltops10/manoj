#include <stdio.h>

float circumference(float a) {
    return 4 * a;
}

int main() {
    float side;
    
    printf("Enter the length of a side of the square: ");
    scanf("%f", &side);
    
    // Calculate and display the circumference
    float square_circumference = circumference(side);
    printf("The circumference of the square is: %.2f\n", square_circumference);
    
    return 0;
}