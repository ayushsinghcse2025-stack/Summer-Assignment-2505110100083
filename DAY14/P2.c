#include <stdio.h>

int main() {
    int n, target, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to find frequency: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            count++;
    }

    if (count > 0)
        printf("Element %d appears %d time(s) in the array.\n", target, count);
    else
        printf("Element %d not found in the array.\n", target);

    return 0;
}