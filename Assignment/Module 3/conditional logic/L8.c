//WAP to accept the height of a person in centimeters and categorize the 
//person according to their height.
#include <stdio.h>

#include <stdio.h>

int main() {
    float height_cm;

    // Accepting height in centimeters from the user
    printf("Enter the height in centimeters: ");
    scanf("%f", &height_cm);

    // Categorizing the person based on height
    if (height_cm < 150) {
        printf("Person is Short\n");
    } else if (height_cm >= 150 && height_cm < 170) {
        printf("Person is of Average Height\n");
    } else if (height_cm >= 170 && height_cm < 190) {
        printf("Person is Tall\n");
    } else {
        printf("Person is Very Tall\n");
    }

    return 0;
}
