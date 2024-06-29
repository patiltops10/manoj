 //WAP to check whether a number is negative, positive or zero. 
 #include <stdio.h>

int main() {
    int num;

    // Accepting a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking if the number is negative
    if (num < 0) {
        printf("The number %d is Negative\n", num);
    }
    // Checking if the number is positive
    else if (num > 0) {
        printf("The number %d is Positive\n", num);
    }
    // If the number is neither negative nor positive, it's zero
    else {
        printf("The number is Zero\n");
    }

    return 0;
}
