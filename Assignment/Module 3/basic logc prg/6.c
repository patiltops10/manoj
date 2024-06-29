//find area of triangle formula A=1/2*b*h
#include <stdio.h>

int main() {
    float base, height, area;


    printf("Enter the length of the base of the triangle: ");
    scanf("%f", &base);


    printf("Enter the height of the triangle: ");
    scanf("%f", &height);


    area = 0.5 * base * height;


    printf("Area of the triangle with base %.2f units and height %.2f units is: %.2f square units\n", base, height, area);

    return 0;
}
