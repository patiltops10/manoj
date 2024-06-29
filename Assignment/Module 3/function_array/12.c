// WAP to accept 5 students name and store it in array 
//array is a derived data-type.
#include <stdio.h>

int main() {
    char names[5][50]; // Array to store 5 names, each up to 49 characters long

    // Accept 5 names from the user
    printf("Enter the names of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        // Remove newline character if present
        //size_t len = strlen(names[i]);
       // if (len > 0 && names[i][len - 1] == '\n') {
          //  names[i][len - 1] = '\0';
        }
    }

    // Display the names
   // printf("\nThe names of the students are:\n");
    //for (int i = 0; i < 5; i++) {
      //  printf("Student %d: %s\n", i + 1, names[i]);
    //}

   // return 0;
//}
