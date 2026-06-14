#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = -1, second = -1;

    // Find largest
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    // Find second largest
    for (int i = 0; i < n; i++) {
        if (arr[i] > second && arr[i] != largest)
            second = arr[i];
    }

    if (second == -1)
        printf("No second largest element found.\n");
    else
        printf("Largest: %d\nSecond Largest: %d\n", largest, second);

    return 0;
}