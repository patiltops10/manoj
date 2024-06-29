#include <stdio.h>

int main() {
    double monthly_salary, insurance_premium, loan_installment, remaining_salary;

    // Input monthly salary
    printf("Enter monthly salary: ");
    scanf("%lf", &monthly_salary);

    // Calculate insurance premium (10% of salary)
    insurance_premium = 0.1 * monthly_salary;

    // Calculate loan installment (10% of salary)
    loan_installment = 0.1 * monthly_salary;

    // Calculate remaining salary after deductions
    remaining_salary = monthly_salary - insurance_premium - loan_installment;

    // Display the result
    printf("Insurance premium: %.2lf\n", insurance_premium);
    printf("Loan installment: %.2lf\n", loan_installment);
    printf("Remaining salary: %.2lf\n", remaining_salary);

    return 0;
}