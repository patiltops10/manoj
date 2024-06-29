//10.find the area of a rectangular prism formula : A=2(wl+hl+hw) 
#include <stdio.h>

float Area(float w, float l, float h) {
    return 2 * (w * l + h * l + h * w);
}

int main() {
    float width, length, height;
    
    printf("Enter the width: ");
    scanf("%f", &width);
    
    printf("Enter the length: ");
    scanf("%f", &length);
    
    printf("Enter the height: ");
    scanf("%f", &height);
    
    float area = Area(width, length, height);
    printf("The surface area of the rectangular prism is: %.2f\n", area);
    
    return 0;
}
