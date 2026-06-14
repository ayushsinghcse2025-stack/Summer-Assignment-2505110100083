#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;  // Return index if found
    }
    return -1;  // Return -1 if not found
}

int main() {
    int arr[] = {10, 25, 7, 43, 18, 6, 99};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter element to search: ");
    scanf("%d", &target);

    int result = linearSearch(arr, n, target);

    if (result != -1)
        printf("Element %d found at index %d (position %d)\n", target, result, result + 1);
    else
        printf("Element %d not found in the array.\n", target);

    return 0;
}