//find area of square formula a=a2
#include <stdio.h>

int main() {
    float side, area;

    printf("Enter the length of a side of the square: ");
    scanf("%f", &side);


    area = side * side;


    printf("Area of the square with side %.2f units is: %.2f square units\n", side, area);

    return 0;
}
