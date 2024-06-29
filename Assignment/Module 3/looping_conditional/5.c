//5. WAP to print factorial of given number.
#include<stdio.h>

int main(){
    int number;
    unsigned long long factorial = 1;

    printf("Enter the no which want to factorial:");
    scanf("%d",&number);

          for (int i = 1; i <= number; ++i) {
            
            factorial *= i;

         }
printf("Factorial of %d = %llu\n", number, factorial);
        }

