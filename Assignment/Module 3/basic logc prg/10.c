 //Find circumference of Triangle formula : triangle = a + b + c 
 #include <stdio.h>
float perimeter(float a, float b, float c) {
    return a + b + c;
}

int main() {
    float side1, side2, side3;
    
    printf("Enter the length of side 1: ");
    scanf("%f", &side1);
    
    printf("Enter the length of side 2: ");
    scanf("%f", &side2);
    
    printf("Enter the length of side 3: ");
    scanf("%f", &side3);
    
    float tri_perimeter = perimeter(side1, side2, side3);
    printf("The perimeter of the triangle is: %.2f\n", tri_perimeter);
    
    return 0;
}