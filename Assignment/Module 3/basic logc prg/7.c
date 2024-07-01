//7. Find area of Rectangle Formula : A=wl
#include<stdio.h>
float calcuate_area(float length,float width) {
    float area =length * width;
    return area;
}
int main(){
    float length, width,area;
    printf("enter length of rectangle:");
    scanf("%f",&length);
    printf("enter width of rectangle:");
    scanf("%f",&width);
    printf("The area of the rectangle is:%.2f\n", area);
    return 0;
}
//nok
