#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int n1 = 5, n2 = 5;
    int result[20], k = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                result[k++] = arr1[i];
                break;
            }
        }
    }

    printf("Intersection: ");
    for (int i = 0; i < k; i++)
        printf("%d ", result[i]);

    return 0;
}