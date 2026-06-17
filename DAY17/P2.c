#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int n1 = 5, n2 = 5;
    int result[20], k = 0;

    for (int i = 0; i < n1; i++)
        result[k++] = arr1[i];

    for (int i = 0; i < n2; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (arr2[i] == result[j]) {
                found = 1;
                break;
            }
        }
        if (!found)
            result[k++] = arr2[i];
    }

    printf("Union: ");
    for (int i = 0; i < k; i++)
        printf("%d ", result[i]);

    return 0;
}