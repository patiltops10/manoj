#include <stdio.h>

int main() {
    double expenses[5];
    double total_expense = 0.0;
    double average_expense;
    int i;

    // Input expenses
    for (i = 0; i < 5; i++) {
        printf("Enter expense %d: ", i+1);
        scanf("%lf", &expenses[i]);
        total_expense += expenses[i];
    }

    // Calculate average expense
    average_expense = total_expense / 5;

    // Display results
    printf("\nExpenses:\n");
    printf("----------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("Expense %d: %.2lf\n", i+1, expenses[i]);
    }
    printf("----------------------------\n");
    printf("Total Expense: %.2lf\n", total_expense);
    printf("Average Expense: %.2lf\n", average_expense);

    return 0;
}
