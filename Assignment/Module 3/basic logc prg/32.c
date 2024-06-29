#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate sum
    sum = num1 + num2;

    // Check size of sum
    if (sum >= -32768 && sum <= 32767) {
        printf("Sum is within the range of 'short' data type.\n");
    } else if (sum >= -2147483648 && sum <= 2147483647) {
        printf("Sum is within the range of 'int' data type.\n");
    } else {
        printf("Sum is outside the range of both 'short' and 'int' data types.\n");
    }

    return 0;
}
