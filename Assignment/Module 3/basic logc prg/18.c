#include <stdio.h>

int main() {
    float monthly_salary, annual_salary;

    // Input the person's monthly salary
    printf("Enter the person's monthly salary: ");
    scanf("%f", &monthly_salary);

    // Calculate the annual salary
    annual_salary = monthly_salary * 12;

    // Display the annual salary
    printf("The person's annual salary is: %.2f\n", annual_salary);

    return 0;
}