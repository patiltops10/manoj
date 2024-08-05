//find area of triangle given base and height.
#include<stdio.h>
int main(){
     
    float area,height,base;
    printf("Enter base of triangle:");
    scanf("%f",&base);

    printf("Enter the height of triangle:");
    scanf("%f",&height);

    area=0.5*base*height;
    printf("area is %f:",0.5*base*height);
}
