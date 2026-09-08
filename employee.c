#include <stdio.h>

struct Employee {
    int id, performance;
    float basic, allowance, overtime, deduction;
    float gross, bonus, net;
};

void salary(struct Employee *e)
{
    e->gross = e->basic + e->allowance + e->overtime;

    if (e->performance >= 80)
        e->bonus = 1000;
    else
        e->bonus = 0;

    e->net = e->gross + e->bonus - e->deduction;
}void payslip(struct Employee *e)
{
    printf("\nID = %d", e->id);
    printf("\nGross Salary = %.2f", e->gross);
    printf("\nBonus = %.2f", e->bonus);
    printf("\nNet Salary = %.2f", e->net);
}



int main()
{
    struct Employee e1, e2;

    // Employee 1 details
    printf("Enter details for Employee 1\n");
    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);
    printf("Enter Performance (0-100): ");
    scanf("%d", &e1.performance);
    printf("Enter Basic Salary: ");
    scanf("%f", &e1.basic);
    printf("Enter Allowance: ");
    scanf("%f", &e1.allowance);
    printf("Enter Overtime: ");
    scanf("%f", &e1.overtime);
    printf("Enter Deduction: ");
    scanf("%f", &e1.deduction);

    // Employee 2 details
    printf("\nEnter details for Employee 2\n");
    printf("Enter Employee ID: ");
    scanf("%d", &e2.id);
    printf("Enter Performance (0-100): ");
    scanf("%d", &e2.performance);
    printf("Enter Basic Salary: ");
    scanf("%f", &e2.basic);
    printf("Enter Allowance: ");
    scanf("%f", &e2.allowance);
    printf("Enter Overtime: ");
    scanf("%f", &e2.overtime);
    printf("Enter Deduction: ");
    scanf("%f", &e2.deduction);

    // Calculate salary for both
    salary(&e1);
    salary(&e2);

    // Print payslip for both
    payslip(&e1);
    payslip(&e2);

    return 0;
}
