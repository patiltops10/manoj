//find area of cube formula a=6a2
#include <stdio.h>

int main() {
    float side, area;


    printf("Enter the length of a side of the cube: ");
    scanf("%f", &side);


    area = 6 * side * side;


    printf("Surface area of the cube with side %.2f units is: %.2f square units\n", side, area);

    return 0;
}
