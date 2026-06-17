#include <stdio.h>

int main() {
    int arr1[] = {4, 9, 1, 17, 11, 26, 28, 54, 69};
    int arr2[] = {9, 14, 28, 26, 54, 69, 99, 102};
    int n1 = 9, n2 = 8;

    printf("Common elements: ");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}