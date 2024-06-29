//Calculate sum of 10 numbers using of while loop.
#include <stdio.h>

int main() {
    int sum = 0;
    int count = 1; 

    printf("Enter 10 numbers:\n");

    while (count <= 10) {
        int number;
        printf("Number %d: ", count);
        scanf("%d", &number);

        sum += number;
        count++; 
    }

    printf("Sum of the 10 numbers is: %d\n", sum);

    return 0;
}
