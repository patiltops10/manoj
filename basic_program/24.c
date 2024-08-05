//convert temp celcius into farehenheit
#include<stdio.h>
int main(){
    float celcius,farhnheit;
    printf("Enter temp int celcius:");
    scanf("%f",&celcius);

    farhnheit = (celcius*9/5)+32;

    printf("%2fcelcius=%2f farnheit\n",celcius,farhnheit);
}