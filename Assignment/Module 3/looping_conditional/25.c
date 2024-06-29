//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include <stdio.h>

int main() {
    int n, i, j;
    int sum = 0;
    int inner_sum = 0;


    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; ++i) {
        inner_sum = 0; 
        for (j = 1; j <= i; ++j) {
            inner_sum += j; 
        }
        sum += inner_sum; 
    }

    
    printf("Sum of sums from 1 to %d = %d\n", n, sum);

    return 0;
}

