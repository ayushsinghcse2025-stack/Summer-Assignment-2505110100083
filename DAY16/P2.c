#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 1, 4, 1, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int maxElement = arr[0];
    int maxCount = 0;
    
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    
    printf("Element with maximum frequency: %d\n", maxElement);
    printf("Frequency: %d\n", maxCount);
    
    return 0;
}