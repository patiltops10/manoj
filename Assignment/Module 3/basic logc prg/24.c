#include <stdio.h>

int main() {
    char names[5][50];
    double salaries[5];
    double total_salary = 0.0;
    double average_salary;
    int i;

    // Input employee names and salaries
    for (i = 0; i < 5; i++) {
        printf("Enter name of employee %d: ", i+1);
        scanf("%s", names[i]);
        printf("Enter salary of employee %d: ", i+1);
        scanf("%lf", &salaries[i]);
        total_salary += salaries[i];
    }

    // Calculate average salary
    average_salary = total_salary / 5;

    // Display results
    printf("\nEmployee Information:\n");
    printf("----------------------------\n");
    printf("Name\t\tSalary\n");
    printf("----------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%s\t\t%.2lf\n", names[i], salaries[i]);
    }
    printf("----------------------------\n");
    printf("Total Salary: %.2lf\n", total_salary);
    printf("Average Salary: %.2lf\n", average_salary);

    return 0;
}
