#include <stdio.h>

int main() {
    char name[50];
    float basicSalary, bonus, netSalary;

    printf("=== Salary Management System ===\n\n");

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary >= 50000)
        bonus = 5000;
    else
        bonus = 2000;

    netSalary = basicSalary + bonus;

    printf("\n=== Salary Details ===\n");
    printf("Employee Name : %s\n", name);
    printf("Basic Salary  : %.2f\n", basicSalary);
    printf("Bonus         : %.2f\n", bonus);
    printf("Net Salary    : %.2f\n", netSalary);

    return 0;
}