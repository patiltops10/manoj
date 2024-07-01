//8. Find circumference of Rectangle formula : C = 4 * a
#include <stdio.h>
//float calculate_circumference (float circumference,float area){
    //return circumference;
    //float_circumference = 4 * area;
//}
int main (){
    float circumference,area;
    printf("enter the area of rectangle:");
    scanf("%f",&area);
    circumference = 4 * area;
    printf("The circumfernce of rectangle is : %.2f\n" , circumference);

    return 0;
    }