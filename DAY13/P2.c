#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    double arr[n];
    double sum = 0;
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element [%d]: ", i + 1);
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }
    
    double average = sum / n;
    
    printf("\n--- Results ---\n");
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\nSum     : %.2f\n", sum);
    printf("Average : %.2f\n", average);
    
    return 0;
}