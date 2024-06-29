// Calculate the Sum of Natural Numbers Using the While Loop 
#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int i = 1; // Starting from the first natural number

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1; 
    }

    
    while (i <= n) {
        sum += i;
        i++;
    }

    
    printf("Sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}
