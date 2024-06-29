// Write a C program to check whether a triangle can be formed with the given 
//values for the angles. 
#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    // Input the three angles of the triangle
    printf("Enter the first angle: ");
    scanf("%d", &angle1);

    printf("Enter the second angle: ");
    scanf("%d", &angle2);

    printf("Enter the third angle: ");
    scanf("%d", &angle3);

    // Check if the sum of angles equals 180 degrees
    if (angle1 + angle2 + angle3 == 180) {
        printf("The triangle can be formed with the given angles.\n");
    } else {
        printf("The triangle cannot be formed with the given angles.\n");
    }

    return 0;
}
