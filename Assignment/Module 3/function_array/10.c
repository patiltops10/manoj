#include <stdio.h>

// Function prototype
int isPalindrome(int num);

int main() {
    int num;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a palindrome
    if (isPalindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    // Calculate the reversed number
    for (; num != 0; num /= 10) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
    }

    // Check if the original number and the reversed number are the same
    return originalNum == reversedNum;
}