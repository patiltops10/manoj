 //WAP to show difference between Structure and Union.
 #include <stdio.h>
#include <string.h>

// Define a structure
struct PersonStruct {
    char name[20];
    int age;
    float height;
};

// Define a union
union PersonUnion {
    char name[20];
    int age;
    float height;
};

int main() {
    // Declare and initialize a structure
    struct PersonStruct person1;
    strcpy(person1.name, "Alice");
    person1.age = 30;
    person1.height = 5.5;

    // Declare and initialize a union
    union PersonUnion person2;
    strcpy(person2.name, "Bob");
    person2.age = 40;
    person2.height = 6.0;

    // Display structure details
    printf("Structure:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    // Display union details
    printf("\nUnion:\n");
    strcpy(person2.name, "Bob"); // Reassign name to show difference in memory usage
    printf("Name: %s\n", person2.name);
    person2.age = 40;
    printf("Age: %d\n", person2.age);
    person2.height = 6.0;
    printf("Height: %.2f\n", person2.height);

    // Size of structure and union
    printf("\nSize of structure: %lu bytes\n", sizeof(person1));
    printf("Size of union: %lu bytes\n", sizeof(person2));

    return 0;
} 