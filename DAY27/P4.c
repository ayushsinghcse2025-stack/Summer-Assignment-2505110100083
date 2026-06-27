#include <stdio.h>

int main() {
    char name[50];
    int rollNo;
    float m1, m2, m3, total, percentage;

    printf("=== Marksheet Generation System ===\n\n");

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Marks of Subject 1: ");
    scanf("%f", &m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &m3);

    total = m1 + m2 + m3;
    percentage = total / 3;

    printf("\n===== MARKSHEET =====\n");
    printf("Name       : %s\n", name);
    printf("Roll No.   : %d\n", rollNo);
    printf("Subject 1  : %.2f\n", m1);
    printf("Subject 2  : %.2f\n", m2);
    printf("Subject 3  : %.2f\n", m3);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade      : A\n");
    else if (percentage >= 75)
        printf("Grade      : B\n");
    else if (percentage >= 50)
        printf("Grade      : C\n");
    else
        printf("Grade      : Fail\n");

    return 0;
}