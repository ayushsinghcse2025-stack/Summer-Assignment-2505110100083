#include <stdio.h>

int main() {
    int arr[] = {23, 5, 87, 12, 64, 3, 99, 41};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nLargest:  %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}