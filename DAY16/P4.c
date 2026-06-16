#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    int newSize = 0;
    
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        
        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    
    return newSize;
}

int main() {
    int arr[] = {1, 3, 2, 3, 4, 1, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int newSize = removeDuplicates(arr, n);
    
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}