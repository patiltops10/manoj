#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    char ascii_value = num;

    printf("The ASCII value of %d is: %d\n", num, ascii_value);

    return 0;
}